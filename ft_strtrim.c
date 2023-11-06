#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t  s1len;
    size_t  setlen;
    size_t  i;
    size_t  j;

    s1len = ft_strlen(s1);
    setlen = ft_strlen(set);
    i = 0;
    j = 0;
    if(set == NULL || set == "\0")
        return(s1);
    while(s1[i] != '\0')
    {
        while(s1[i] == set[j])
    }
}
