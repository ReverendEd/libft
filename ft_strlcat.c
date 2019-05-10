/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:20:42 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/01 23:21:57 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_strlcat(char *s1, const char *s2, size_t dstsize)
{
	int i;
	int j;
	int n;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	n = dstsize - i - 1;
	while (s2[j] && n > 0)
	{
		s1[i] = s2[j];
		i++;
		j++;
		n--;
	}
	while (s2[j])
		j++;
	s1[i] = '\0';
	return (j);
}
