#include "libft.h"

char *ft_strnstr(const char *str, const char *sub,size_t len)
{
    size_t sublen;

    sublen = ft_strlen(sub);
    if(sublen == 0)
        return str;
    while (*str && len >= sublen)
    {
        if(ft_strncmp(str,sub,sublen) == 0)
            return (char *)str;
        *str++;
        len--;
    }
    return NULL;
}
