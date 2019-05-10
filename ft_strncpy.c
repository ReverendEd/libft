/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 21:57:11 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/01 21:57:12 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (len > 0)
	{
		if (src[i])
		{
			dst[i] = src[i];
		}
		else
		{
			dst[i] = '\0';
		}
		len--;
		i++;
	}
	return (dst);
}
