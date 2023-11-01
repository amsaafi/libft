#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    size_t  i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == (char)c)
            return ((char *)str + i);
        i++;
    }
    return (NULL);
}

int main() {
    const char *str = "Hello, World!";
    char *result = ft_strchr(str, 'o');

    while (result != NULL) {
        printf("Character found at position: %ld\n", result - str);
        result = ft_strchr(result + 1, 'o');
    }

    return 0;
}