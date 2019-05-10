/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:39:57 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/02 13:05:23 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	int i;
	int j;
	unsigned char *temp;

	i = 0;
	j = n;
	temp = (unsigned char *)s;
	while (i < j)
	{
		temp[i] = 0;
		i++;
	}
}
