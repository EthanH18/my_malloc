/*
** EPITECH PROJECT, 2022
** my_malloc
** File description:
** my_malloc
*/

#include "my_malloc.h"

void *malloc(size_t size)
{
    static void *memory = NULL;
    memory_t mem = (memory_t)memory;

    if (size == 0)
        return NULL;
    two_bytes(&size);
    if (!memory) {
        mem = sbrk(check_getpagesize(size));
        if (mem == (void *)-1)
            return NULL;
        memory = mem;
        *mem = (memory_s){NULL, size, 0};
        return ((void *)mem + SIZE_MAX);
    }
    return (best_fit(mem, size));
}