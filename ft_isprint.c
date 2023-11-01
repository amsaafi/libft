/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:54:39 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/01 09:54:45 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
        return 1;
    return 0;
}
