/*
** EPITECH PROJECT, 2022
** my_malloc
** File description:
** free
*/

#include "my_malloc.h"

void free(void *ptr)
{
    memory_t mem = ptr - SIZE_MAX;

    if (ptr == NULL)
        return ;
    mem->free = true;
}