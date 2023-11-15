/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:32:48 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/03 19:32:51 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num != 0 && size > SIZE_MAX / num)
		return (NULL);
	ptr = malloc(num * size);
	if (ptr)
	{
		ft_bzero(ptr, num * size);
		return (ptr);
	}
	return (NULL);
}
