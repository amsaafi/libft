#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h> // !!! DO NOT FORGET TO DELETE THIS LINE !!!
#include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigt(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *str);
void *ft_memset (void *prt, int value, size_t num);
void ft_bzero(void *s, size_t n);
void *ft_memcpy (void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);

#endif