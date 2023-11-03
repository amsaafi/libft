#include "libft.h"

char *ft_strdup(const char *s)
{
    char *dup;
    size_t i;
    size_t len;

    i = 0;
    len = ft_strlen(s);
    dup = (char *)malloc(len * sizeof(char)+1);
    if (dup == NULL)
        return NULL;
    while (s[i])
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}
