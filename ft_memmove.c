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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest > src)
	{
		while (i > 0)
		{
			((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
