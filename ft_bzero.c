/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:27:13 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/01 11:27:16 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    //ft_memset (s, '\0', n);
    size_t i;
    unsigned int *byte_ptr;

    i = 0;
    byte_ptr = (unsigned int *)s;
    while(i < n)
    {
        byte_ptr[i] = 0;
        i++;
    }
}
