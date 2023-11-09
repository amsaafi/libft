/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:08:29 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/03 20:08:32 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigt(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *prt, int value, size_t num);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *s1, char *s2, size_t n);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void	*ft_memchr(const void *prt, int value, size_t num);
char	*ft_strnstr(const char *str, const char *sub, size_t len);
int		ft_atoi(const char *nptr);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t num, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *str, char c);
char	*ft_itoa(int n);

#endif
