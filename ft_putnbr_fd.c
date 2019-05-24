/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:27:11 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/22 17:32:41 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
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
		write(fd, &tmp, 1);
		mult /= 10;
	}
}
