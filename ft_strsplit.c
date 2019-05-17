/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 14:30:31 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/15 14:47:54 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int		get_word_count(char const *s, char c);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	**ft_strsplit(char const *s, char c);
int		get_letter_count(char const *s, char c);

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *substring;
	int i;

	i = 0;
	substring = (char *)malloc(len);
	if (!substring)
		return (NULL);
	while (s[start] && len > 0)
	{
		substring[i] = s[start];
		i++;
		start++;
		len--;
	}
	substring[i] = '\0';
	return (substring);
}

char	**ft_strsplit(char const *s, char c)
{
	int word_count;
	char **result;
	int letter_count;
	int i;
	int k;

	i = 0;
	k = 0;
	letter_count = 0;
	result = (char **)malloc(sizeof(char *) * word_count);
	word_count = get_word_count(s, c);
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
		{
			letter_count = get_letter_count(&s[i], c);
			result[k] = (char *)malloc(sizeof(char) * letter_count + 1);
			result[k] = ft_strsub(&s[i], 0, get_letter_count(&s[i], c));
			k++;
		}
		i++;
	}
	return (result);
}

int		get_letter_count(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

int		get_word_count(char const *s, char c)
{
	int word_count;
	int i;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			word_count++;
		}
		i++;
	}
	return (word_count);
}