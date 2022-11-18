/*
** EPITECH PROJECT, 2022
** my_malloc
** File description:
** realloc_array
*/

#include "my_malloc.h"

void *reallocarray(void *ptr, size_t nmemb, size_t size)
{
    return (realloc(ptr, nmemb * size));
}