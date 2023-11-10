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

static char	*ft_alloc(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	size_t	s_len;

	i = start;
	j = 0;
	s_len = ft_strlen(s);
	if (len > s_len - start)
		len = s_len - start;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*ptr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		ptr = malloc(1 * sizeof(char));
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	return (ft_alloc(s, start, len));
}
