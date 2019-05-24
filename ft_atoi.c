/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 09:48:33 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/22 17:36:57 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int mult;
	int result;

	i = 0;
	mult = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
			return (0);
		i++;
	}
	mult = i;
	i = 0;
	while (mult > 0)
	{
		result *= 10;
		result += (str[i] - 48);
		i++;
		mult--;
	}
	return (result);
}
