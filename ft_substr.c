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

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;

    if(!s)
        return (NULL);
    if(ft_strlen(s) > start)
        return (NULL);
    ptr = ft_calloc(len, sizeof(char));
    ft_strncmp(ptr, (char)&s[start], len + 1);
    return (ptr);
}
