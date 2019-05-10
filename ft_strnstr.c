/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 08:31:45 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/02 08:31:53 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

const char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!needle[0])
	{
		return (haystack);
	}
	while (haystack[i] && len > 0)
	{
		while (haystack[i] == needle[j] && len > 0)
		{
			i++;
			j++;
			len--;
			if (needle[j] == '\0')
			{
				return (&haystack[i - j]);
			}
		}
		i++;
		len--;
	}
	return (NULL);
}
