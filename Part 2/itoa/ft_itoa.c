/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 23:16:25 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/26 00:01:01 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;
	int	i;
	int	j;
	int	x;

	j = 1;
	x = 0;
	if (n < 0)
	{
		x = 1;
		n = -n;
		j = 2;
	}
	i = n;
	while (i >= 10)
	{
		i = i / 10;
		j++;
	}
	if (!(str = malloc(sizeof(char*) * j + 1)))
		return (NULL);
	str[j--] = '\0';
	if (n == 0)
	{
		str[j] = '0';
		return (str);
	}
	while (n >= 1)
	{
		i = n % 10;
		n = n / 10;
		str[j] = i + 48;
		j--;
	}
	if (x == 1)
		str[j] = '-';
	return (str);
}
