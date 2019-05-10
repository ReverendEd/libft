/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 14:11:30 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/06 16:13:20 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char *new;
	int i;

	new = (char *)malloc(sizeof(s));
	if(!new)
		return (NULL);
	i = 0;
	while(s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}
