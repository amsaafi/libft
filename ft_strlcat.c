/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:08:26 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/01 20:08:29 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			destlen;
	size_t			srclen;

	i = 0;
	j = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	while (dest[j] != '\0')
		j++;
	if (size == 0 || size <= destlen)
		return (srclen + size);
	while (src[i] != '\0' && i < size - destlen - 1)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (destlen + srclen);
}
