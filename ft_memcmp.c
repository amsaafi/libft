/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:03:48 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/03 10:03:53 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	if (num == 0)
		return (0);
	str1 = (const unsigned char *)ptr1;
	str2 = (const unsigned char *)ptr2;
	i = 0;
	while (i < num - 1 && (str1[i] == str2[i]))
		i++;
	return (str1[i] - str2[i]);
}
