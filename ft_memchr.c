/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:42:23 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/02 13:11:14 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;
	char *temp;

	i = 0;
	temp = (char *)s;
	while (temp[i] && n > 0)
	{
		if (temp[i] == c)
		{
			return (&temp[i]);
		}
		i++;
		n--;
	}
	return (NULL);
}
