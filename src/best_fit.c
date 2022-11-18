/*
** EPITECH PROJECT, 2022
** my_malloc
** File description:
** mem
*/

#include "my_malloc.h"

void *best_fit(memory_t mem, size_t size)
{
    memory_t bestfit = NULL;

    if (mem->size >= size && mem->check == 1)
        bestfit = mem;
    for (; mem->next != NULL; mem = mem->next)
        if (mem->size >= size && mem->check == 1 && (bestfit == NULL ||
                                                    mem->size < bestfit->size))
            bestfit = mem;
    if (bestfit) {
        bestfit->check = 0;
        return ((void *)bestfit + SIZE_MAX);
    }
    if ((void *)mem + size + mem->size > sbrk(0))
        if (sbrk(check_getpagesize((void *)mem + size + mem->size -
        sbrk(0))) == (void *) - 1)
            return NULL;
    mem->next = (void *)mem + mem->size;
    *mem->next = (memory_s) {NULL, size, 0};
    return ((void *)mem->next + SIZE_MAX);
}