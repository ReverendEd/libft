/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ed <ed@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 15:35:03 by ed                #+#    #+#             */
/*   Updated: 2019/05/12 15:35:04 by ed               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int n)
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
