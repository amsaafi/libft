/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:55:41 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/09 11:55:44 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str_num;
	int			len;
	long int	num;

	num = n;
	len = ft_count(n);
	if (n < 0)
	{
		num *= -1;
		len++;
	}
	str_num = (char *)malloc(sizeof(char) * (len + 1));
	if (!str_num)
		return (NULL);
	str_num[len] = 0;
	while (--len >= 0)
	{
		str_num[len] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		str_num[0] = '-';
	return (str_num);
}
