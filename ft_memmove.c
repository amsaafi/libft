/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:52:25 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/01 13:52:28 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if(dest == NULL && src == NULL)
        return NULL;
    if(dest > src)
    {
        while(i <= n)
        {
            ((unsigned char *)dest)[n - i] = ((unsigned char *)src)[n - i];
            i++;
        }
    }
    else
        ft_memcpy(dest, src, n);
    return dest;
}

int main() {
    char str[] = "Hello, world!";
    ft_memmove(str + 7, str , 7);

    printf("Modified string: %s\n", str);

    return 0;
}
