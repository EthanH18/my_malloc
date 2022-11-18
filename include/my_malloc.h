/*
** EPITECH PROJECT, 2022
** malloc
** File description:
** malloc
*/

#include <string.h>
#include <unistd.h>
#include <stdbool.h>

#define SIZE_MAX sizeof(memory_s)

#ifndef MY_MALLOC_H_
    #define MY_MALLOC_H_

typedef struct memory_s {
    struct memory_s *next;
    size_t size;
    int check;
    bool free;
}memory_s;

typedef struct memory_s* memory_t;

void    two_bytes(size_t *size);
int     check_getpagesize(size_t size);
void    *best_fit(memory_t mem, size_t size);
void    *malloc(size_t size);
void    *calloc(size_t nmemb, size_t size);
void    *realloc(void *ptr, size_t size);
void    *reallocarray(void *ptr, size_t nmemb, size_t size);
void     free(void *ptr);

#endif /* !MY_MALLOC_H_ */