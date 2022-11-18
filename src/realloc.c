/*
** EPITECH PROJECT, 2022
** my_malloc
** File description:
** realloc
*/

#include "my_malloc.h"

void *realloc(void *ptr, size_t size)
{
    memory_t mem = ptr - SIZE_MAX;

    two_bytes(&size);
    if (size == 0) {
        free(ptr);
        return NULL;
    }
    if (!ptr)
        return malloc(size);
    if (mem->size == size)
        return ptr;
    if (mem->size > size)
        return ptr;
    if (mem->size < size) {
        free(ptr);
        return memcpy(malloc(size), ptr, mem->size);
    }
    if (mem->size == 0)
        return ptr;
    return NULL;
}
