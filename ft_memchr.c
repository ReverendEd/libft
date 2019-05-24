/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:42:23 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/24 15:20:55 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)s;
	while (temp[i] && n > 0)
	{
		if (temp[i] == c)
		{
			return (&temp[i]);
		}
		i++;
		n--;
	}
	if (temp[i] == '\0' && c == 0)
	{
		return (&temp[i]);
	}
	return (0);
}
