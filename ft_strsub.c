/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 16:07:18 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/22 17:31:00 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	int		i;

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
	return (substring);
}
