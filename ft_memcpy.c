/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:48:34 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/01 12:52:37 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*byte_dest;
	unsigned char	*byte_src;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return ((void *)src);
	byte_dest = (unsigned char *)dest;
	byte_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		byte_dest[i] = byte_src[i];
		i++;
	}
	return (dest);
}
