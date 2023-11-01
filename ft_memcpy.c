/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:48:34 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/01 12:52:37 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memcpy (void *dest, const void *src, size_t n)
{
    unsigned char *byte_dest;
    unsigned char *byte_src;
    size_t i;

    byte_dest = (unsigned char *)src;
    i = 0;
    while(i < n)
    {
        byte_dest[i] = byte_src[i];
        i++;
    }
}

int main() {
    char src[] = "Hello, world!!!";
    char dest[20];

    memcpy(dest, src, sizeof(src));

    printf("Copied string: %s\n", dest);

    return 0;
}
