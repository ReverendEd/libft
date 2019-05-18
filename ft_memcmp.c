/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:56:27 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/17 14:48:04 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*temp1;
	char	*temp2;

	i = 0;
	temp1 = (char *)s1;
	temp2 = (char *)s2;
	while (temp1[i] && temp2[i] && n > 0)
	{
		if (temp1[i] != temp2[i])
		{
			return (temp1[i] - temp2[i]);
		}
		n--;
		i++;
	}
	return (0);
}
