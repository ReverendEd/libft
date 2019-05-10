/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 11:57:28 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/02 14:53:07 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t n)
{
	int i;
	int t;
	char *temp;

	i = 0;
	t = n;
	temp = (char*)malloc(sizeof(char) * (n + 1));
	while (i < t)
	{
		temp[i] = c;
		i++;
	}
	temp[i] = '\0';
	str = temp;
	return (str);
}
