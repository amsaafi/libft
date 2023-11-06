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

int ft_count_words(const char *str, char sep)
{
    int i;
    int count;
    
    i = 0;
    count = 0;
    while(str[i] && str[i] == sep)
        i++;
    while(str[i])
    {
        if((str[i] && str[i] == sep) && str[i + 1] != sep)
            count++;
        i++;
    }
    return (count);
}

char	**spiltwords(char const *s, char c, char **str, int count)
{
	int	i;
	int	j;
	int	len_words;
	int	start;

	i = 0;
	j = 0;
	len_words = 0;
	while (s[j] && i < count)
	i{
		while (s[j] && s[j] == c)
			j++;
		start = j;
		while (s[j] && s[j] != c)
		{
			j++;
			len_words++;
		}
		str[i] = malloc((len_words + 1) * sizeof(char));
		ft_strlcpy(str[i], (s + start), len_words + 1);
		len_words = 0;
		i++;
	}
	str[i] = 0;
	return (str);
}

char	**ft_split(char const *str, char c)
{
	char	**arrstr;
	int		count;

	count = ft_count_words(str, c);
	if (!str)
		return (0);
	arrstr = malloc((count + 1) * sizeof(char *));
	if (!str)
		return (0);
	spiltwords(str, c, arrstr, count);
	return (arrstr);
}
