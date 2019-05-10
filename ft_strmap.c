/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 14:08:40 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/06 16:13:49 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f) (char))
{
	char *new;
	int i;

	new = (char *)malloc(sizeof(s));
	if(!new)
		return (NULL);
	i = 0;
	while(s[i])
	{
		new[i] = f(s[i]);
		i++;
	}
	return (new);
}
