/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:35:55 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/03 19:36:00 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	int		num;

	i = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i]) == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	num = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10;
		num = num + nptr[i] - '0';
		i++;
	}
	return (num * sign);
}
