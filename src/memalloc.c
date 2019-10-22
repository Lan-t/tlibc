//
// Created by tia on 2019/10/21.
//

#include "includes/use.h"
#include "../includes/syscalllib.h"
#include "../includes/printlib.h"

#define TABLE_INIT_SIZE 0x1000

#define CHUNK_PROT_FLAGS PROT_READ|PROT_WRITE|PROT_EXEC
#define CHUNK_MAP_FLAGS MAP_ANONYMOUS|MAP_PRIVATE
#define CHUNK_MIN_SIZE 0x4000


struct table_record {
    void *addr;
    size_t size;
    void* end;
    uint8_t using;

    uint8_t _align[7];
};


static struct table_record *table;
static size_t table_size;


size_t search_empty(struct table_record **buf, size_t num);
void put_table();
void memcat_i(size_t);
void memcat_r(struct table_record*);


void init() {
    const size_t size = sizeof(struct table_record) * TABLE_INIT_SIZE;
    table = mmap(NULL, size, CHUNK_PROT_FLAGS, CHUNK_MAP_FLAGS, -1, 0);
    if (table == NULL) {
        _syscall(1, 2, "table init error\n", 17);
        _syscall(60, EXIT_FAILURE);
    }
    table_size = TABLE_INIT_SIZE;

    table[0].addr = mmap(NULL, CHUNK_MIN_SIZE, CHUNK_PROT_FLAGS, CHUNK_MAP_FLAGS, -1, 0);
    if (table[0].addr == NULL) {
        _syscall(1, 2, "table[0] init error", 20);
        _syscall(60, EXIT_FAILURE);
    }
    table[0].end = (void*)((size_t)table[0].addr + CHUNK_MIN_SIZE);
    table[0].size = CHUNK_MIN_SIZE;
    table[0].using = false;

    table[1].addr = NULL;
}


void* memalloc(size_t size) {
    for (size_t i = 0; i < table_size; i ++) {
        struct table_record * const record = table + i;
        if (record->addr == NULL) {
            continue;
        }
        if (!record->using) {
            if (record->size >= size) {
                record->using = true;

                const size_t remain = record->size - size;

                if (remain == 0) {
                    return record->addr;
                }

                struct table_record *empty_record[1];
                void *next_addr = (void*)((size_t)record->addr + size);

                size_t get_n = search_empty(empty_record, 1);
                if (get_n < 1) {
                    return record->addr;
                }

                struct table_record *next_record = empty_record[0];

                next_record->addr = next_addr;
                next_record->size = remain;
                next_record->using = false;
                next_record->end = record->end;

                record->size = size;
                record->end = next_addr;

                memcat_r(next_record);

                return record->addr;
            } else {
                continue;
            }
        }
    }

    struct table_record *empty[2];
    size_t get_n = search_empty(empty, 2);

    if (get_n < 1) {
        return NULL;
    }

    bool size_is_sufficient = size > CHUNK_MIN_SIZE;
    size_t new_size = size_is_sufficient ? size : CHUNK_MIN_SIZE;
    empty[0]->addr = mmap(NULL, new_size, CHUNK_PROT_FLAGS, CHUNK_MAP_FLAGS, -1, 0);
    if (empty[0]->addr == NULL) {
        return NULL;
    }
    empty[0]->size = new_size;
    empty[0]->using = true;
    empty[0]->end = (void*)((size_t)empty[0]->addr + new_size);

    if (!size_is_sufficient && get_n >= 2) {
        empty[0]->size = size;
        empty[1]->size = CHUNK_MIN_SIZE - size;
        empty[1]->addr = (void*)((size_t)empty[0]->addr + size);
        empty[1]->using = false;
        empty[1]->end = empty[0]->end;
        empty[0]->end = empty[1]->addr;
        puts("div;");
    }
    puts("mmap;");
    return empty[0]->addr;
}


void memfree(void *addr) {
    for (size_t i = 0; i < table_size; i ++) {
        if (table[i].addr == addr) {
            table[i].using = false;
            memcat_r(table + i);
            break;
        }
    }
}


size_t search_empty(struct table_record **buf, size_t num) {
    size_t found = 0;
    for (size_t i = 0; i < table_size; i ++) {
        if (table[i].addr == NULL) {
            buf[found] = table + i;
            found ++;
        }
        if (found >= num) {
            break;
        }
    }

    return found;
}


void put_table() {
    puts("--------------------------------------\n");
    for (size_t i = 0; i < table_size; i ++) {
        putr(table[i].addr);
        puts(" ");
        putr(table[i].end);
        puts(" ");
        putr(table[i].size);
        puts(" ");
        if (table[i].using) {
            puts("true");
        } else {
            puts("false");
        }
        puts("\n");
    }
    puts("--------------------------------------\n");
}


void memcat_i(size_t index) {
    struct table_record *record = table + index;
    memcat_r(record);
}

void memcat_r(struct table_record *record) {

    for (size_t i = 0; i < table_size; i ++) {
        if (record->addr == table[i].end && !table[i].using) {
            table[i].end = record->end;
            table[i].size += record->size;
            record->addr = NULL;
//            record->size = -1;
            record = table + i;
        }
        if (record->end == table[i].addr && !table[i].using) {
            record->end = table[i].end;
            record->size += table[i].size;
            table[i].addr = NULL;
//            table[i].size = -1;
        }
    }
}
