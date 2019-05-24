/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:44:31 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/24 15:08:24 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*temp;
	const unsigned char	*temp2;
	int					i;

	i = 0;
	temp = (unsigned char*)dst;
	temp2 = (unsigned char*)src;
	while (temp[i] && temp2[i] && n > 0)
	{
		temp[i] = temp2[i];
		i++;
		n--;
	}
	return (dst);
}
