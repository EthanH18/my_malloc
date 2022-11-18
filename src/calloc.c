/*
** EPITECH PROJECT, 2022
** my_malloc
** File description:
** realloc
*/

#include "my_malloc.h"

void *calloc(size_t nmemb, size_t size)
{
    void *tmp = malloc(nmemb * size);

    if (tmp)
        memset(tmp, 0, nmemb * size);
    return tmp;
}