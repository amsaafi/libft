#include "libft.h"

void *ft_memchr(const void *ptr, int value, size_t num)
{
    unsigned char *str;
    size_t i;

    i = 0;
    str = (const unsigned char *)ptr;
    while(i < num )
    {
        if(str[i] == (unsigned char)value)
            return ((char *)str + i);
        i++;
    }
    return (NULL);
}
