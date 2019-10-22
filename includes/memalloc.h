//
// Created by tia on 2019/10/21.
//

#ifndef TLIBC_MEMALLOC_H
#define TLIBC_MEMALLOC_H

#include "../src/includes/use.h"

void init();
void* memalloc(size_t size);
void memfree(void*);

#endif //TLIBC_MEMALLOC_H
