/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:00:02 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/04 18:00:05 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		ptr[j] = '\0';
		return (ptr);
	}
	while (s[i] != '\0' && len > 0)
	{
		ptr[j] = s[i];
		i++;
		j++;
		len--;
	}
	ptr[j] = '\0';
	return (ptr);
}
