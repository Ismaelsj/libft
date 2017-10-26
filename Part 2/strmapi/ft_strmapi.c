/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 13:05:23 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/25 13:07:03 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			cpy[i] = f(i, s[i])
			i++;
		}
	}
	return (cpy);
}
