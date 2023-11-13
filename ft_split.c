/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 22:40:54 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/06 22:40:59 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str[i])
		return (count);
	while (str[i] && str[i] == sep)
		i++;
	while (str[i])
	{
		if (((str[i] && str[i] == sep) && str[i + 1] != sep) || str[i
				+ 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

static char	**ft_spilt_words(char const *s, char c, char **str, int count)
{
	int	i;
	int	j;
	int	len_words;
	int	start;

	i = 0;
	j = 0;
	len_words = 0;
	while (s[j] && i < count)
	{
		while (s[j] && s[j] == c)
			j++;
		start = j;
		while (s[j] && s[j] != c)
		{
			j++;
			len_words++;
		}
		str[i] = ft_calloc(len_words + 1, sizeof(char));
		ft_strlcpy(str[i], (s + start), len_words + 1);
		len_words = 0;
		i++;
	}
	str[i] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**arrstr;
	int		count;

	count = ft_count_words(s, c);
	if (!s)
		return (0);
	arrstr = malloc((count + 1) * sizeof(char *));
	if (!arrstr)
		return (0);
	arrstr = ft_spilt_words(s, c, arrstr, count);
	return (arrstr);
}
