/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 23:00:35 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/28 13:37:12 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr(int n)
{
	int i;
	int mult;
	int cpy;
	int tmp;

	i = 0;
	cpy = n;
	mult = 1;
	while (cpy > 0)
	{
		mult *= 10;
		cpy /= 10;
	}
	mult /= 10;
	while (mult >= 1)
	{
		tmp = n / mult;
		n -= (tmp * mult);
		tmp += 48;
		write(1, &tmp, 1);
		mult /= 10;
	}
}
