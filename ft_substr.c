#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;

    if(!s)
        return (NULL);
    if(ft_strlen(s) > start)
        return (NULL);
    ptr = ft_calloc(len, sizeof(char));
    ft_strncmp(ptr, &s[start], len + 1);
    return (ptr);
}