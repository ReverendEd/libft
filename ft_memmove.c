/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:00:37 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/01 16:00:49 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i;
	char *temp;
	const char *temp2;

	i = 0;
	temp = dst;
	temp2 = src;
	while (len > 0)
	{
		temp[i] = temp2[i];
		i++;
		len--;
	}
	return (dst);
}
