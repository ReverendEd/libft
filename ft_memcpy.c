/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:44:31 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/17 10:49:53 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*temp;
	char	*temp2;
	int		i;

	i = 0;
	temp = (char*)dst;
	temp2 = (char*)src;
	while (temp[i] && temp2[i] && n > 0)
	{
		temp[i] = temp2[i];
		i++;
		n--;
	}
	return (dst);
}
