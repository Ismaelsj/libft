/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 12:56:57 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/25 13:04:36 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *cpy;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	if (cpy = malloc(sizeof(char*) * i + 1))
	{
		i = 0;
		while (s[i] != '\0')
		{
			cpy[i] = f(s[i])
			i++;
		}
	}
	return (cpy);
}
