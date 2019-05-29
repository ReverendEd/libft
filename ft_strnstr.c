/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 08:31:45 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/29 11:24:17 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

const char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (!*needle)
		return (haystack);
	while (haystack[i] && len > 0)
	{
		while (haystack[i] == needle[j] && len > 0)
		{
			i++;
			j++;
			len--;
			if (needle[j] == '\0' || len == 0)
			{
				return (&haystack[i - j]);
			}
		}
		j = 0;
		i++;
		len--;
	}
	return (NULL);
}
