/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 14:27:46 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/02 14:29:36 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

int	ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *str, int c, size_t n);
int	ft_isprint(int c);
char *ft_strcat(char *s1, const char *s2);
int	ft_strcmp(const char *s1, const char *s2);
char *ft_strcpy(char *dst, const char *src);
char *ft_strdup(const char *s1);
size_t ft_strlcat(char *s1, const char *s2, size_t dstsize);
size_t ft_strlen(const char *s);
char *ft_strncat(char *s1, const char *s2, size_t n);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strncpy(char *dst, const char *src, size_t len);
const char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
const char *ft_strstr(const char *haystack, const char *needle);
int	ft_tolower(int c);
int	ft_toupper(int c);


#endif