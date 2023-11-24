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
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (sub[j] == '\0')
		return ((char *)str);
	while (len != 0 && str[i])
	{
		while (str[i + j] == sub[j] && str[i + j] != '\0' && i + j < len)
			j++;
		if (sub[j] == '\0')
			return ((char *)str + i);
		i++;
		j = 0;
	}
	return (NULL);
}
