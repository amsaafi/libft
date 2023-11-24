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

static void	ft_free_substrings(char **str, int allocated)
{
	int	i;

	i = 0;
	while (i < allocated)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	**ft_spilt_words(char const *s, char c, char **str, int count)
{
	int	i;
	int	len_words;
	int	start;

	i = 0;
	len_words = 0;
	while (s[i] && len_words < count)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		str[len_words] = malloc(sizeof(char) * ((i - start) + 1));
		if (!str[len_words])
		{
			ft_free_substrings(str, len_words);
			return (NULL);
		}
		ft_strlcpy(str[len_words++], s + start, (i - start) + 1);
	}
	str[len_words] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**arrstr;
	int		count;

	if (!s)
		return (0);
	count = ft_count_words(s, c);
	arrstr = malloc((count + 1) * sizeof(char *));
	if (!arrstr)
		return (0);
	arrstr = ft_spilt_words(s, c, arrstr, count);
	return (arrstr);
}
