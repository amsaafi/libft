#include "libft.h"

int ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
    size_t i;
    char *str1;
    char *str2;

    str1 = (const char *)ptr1;
    str2 = (const char *)ptr2;
    i = 0;

    while(i < num -1 && (str1[i] == str2[i]))
        i++;
    return(str1[i]-str2[i]);
}
