/*
** EPITECH PROJECT, 2022
** my_malloc
** File description:
** size
*/

#include "my_malloc.h"

int check_getpagesize(size_t size)
{
    int i = 2;

    if (size == 0)
        return 0;
    while (size > getpagesize() * i)
        i = i + 2;
    return (getpagesize() * i);
}

void two_bytes(size_t *size)
{
    size_t i = 2;

    while (*size + SIZE_MAX > i)
        i = i * 2;
    *size = i;
}