/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 14:20:29 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/24 14:24:38 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strnew(unsigned int size)
{
	char	*str;
	int	i;

	i = 0;
	if (!(str = malloc(size)))
		return (NULL);
	while (size--)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
