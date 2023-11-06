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

char	**ft_spilt_words(char const *s, char c, char **str, int count)
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
	arrstr = ft_calloc(count + 1, sizeof(char *));
	if (!s)
		return (0);
	ft_spilt_words(s, c, arrstr, count);
	return (arrstr);
}

int main() {
    const char str[] = ",,,,,,,,,,,,,,,,,,,,abc,,,,,,,,,,,,,,,,helloworld,,,test, hello, this,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,";

    int count = ft_count_words(str, ',');
    printf("Number of words: %d\n", count);

    char **arrstr = ft_split(str, ',');
    if (arrstr)
    {
        for (int i = 0; arrstr[i] != NULL; i++)
        {
            printf("Word %d: %s\n", i + 1, arrstr[i]);
            free(arrstr[i]);
        }
        free(arrstr);
    }

    return 0;
}