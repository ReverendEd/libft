/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 15:36:14 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/01 16:00:28 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *temp;
	char *temp2;
	int i;

	i = 0;
	temp = (char *)dst;
	temp2 = (char *)src;
	while (temp[i] && temp2[i] && n > 0)
	{
		temp[i] = temp2[i];
		if (temp[i] == c)
		{
			return (&temp[i+1]);
		}
		i++;
		n--;
	}
	return (NULL);
}
