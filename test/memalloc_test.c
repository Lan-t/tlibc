//
// Created by tia on 2019/10/22.
//

#include "../includes/memalloc.h"
#include "../includes/printlib.h"
#include "../includes/syscalllib.h"

void _start() {
    init();

    void *a = memalloc(0x100);
    void *b = memalloc(0x200);
    void *c = memalloc(0x10);

    memfree(c);

    _syscall(60, 0);
};
