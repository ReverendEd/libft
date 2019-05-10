/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 16:26:35 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/04 16:26:36 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strnew(size_t size)
{
	char *string;
	int i;

	string = (char *)malloc(size);
	if (!string)
		return (NULL);
	i = 0;
	while (size > 0)
	{
		string[i] = 0;
		size--;
		i++;
	}
	return (string);
}
