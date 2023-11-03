/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:06:53 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/03 12:06:56 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t	sublen;

	if (str == NULL || sub == NULL)
		return (NULL);
	sublen = ft_strlen(sub);
	if (sublen == 0)
		return ((char *)str);
	while (*str && len >= sublen)
	{
		if (ft_strncmp(str, (char *)sub, sublen) == 0)
			return ((char *)str);
		*str++;
		len--;
	}
	return (NULL);
}
