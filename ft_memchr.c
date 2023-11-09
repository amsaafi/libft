/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:54:49 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/03 09:54:55 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	const unsigned char	*str;
	size_t				i;

	i = 0;
	str = (const unsigned char *)ptr;
	while (i < num)
	{
		if (str[i] == (unsigned char)value)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
