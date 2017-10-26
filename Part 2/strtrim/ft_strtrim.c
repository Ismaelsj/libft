/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 17:06:59 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/25 18:03:49 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char	*str;
	int	i;
	int 	j;
	int	a;

	i = 0;
	a = 0;
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = i;
	while (s[i] != '\0' && s[i] != ' ' && s[i] != ',' && s[i] != '\n' && s[i] != '\t')
		i++;
	if (!(str = malloc(sizeof(char*) * i + 1)))
		return (NULL);
	while (j < i)
	{
		str[a] = s[j];
		j++;
		a++;
	}
	str[a] = '\0';
	return (str);
}
