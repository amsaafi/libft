#include "libft.h"

static int ft_count(int n)
{
    size_t i;

    i = 0;
    if (n == 0)
        i++;
    while (n != 0)
    {
        n /= 10;
        i++;
    }
    return (i);
}
static int is_negative(int n)
{
    if(n < 0)
      return (n);
    return (0);
}

char *ft_itoa(int n)
{
    int len;
    int temp;
    int sign;
    char *str;
    
    len = ft_count(n);
    sign = 1;
    if (is_negative(n))
    {
        len++;
        sign *= -1;
        n *= -1;
    }
    str = (char*)malloc((len + 1) * sizeof(char));  
    if (!str)
        return NULL;    
    str[len] = '\0';
    while (--len >= 0)
    {
        str[len] = (n % 10) + '0';
        n /= 10;
    }
    if (sign == -1)
        str[0] = '-';
    return str;
}

// int main()
// {
//     int n = 020;
//     char *str = ft_itoa(n);
    
//     if (str)
//     {
//         printf("String: %s\n", str);
//     }
//     free(str);
    
//     return 0;
// }