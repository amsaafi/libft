/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:02:30 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/09 12:02:35 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_concate(char const *s1, char const *s2, char *ptr)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	tlen;
	char	*ptr;

	if (s1 && s2)
	{
		tlen = (ft_strlen(s1) + ft_strlen(s2)) + 1;
		ptr = malloc(tlen);
		if (!ptr)
			return (NULL);
		ft_concate(s1, s2, ptr);
		return (ptr);
	}
	else if (!s1 && s2)
		return ((char *)s2);
	return ((char *)s1);
}
