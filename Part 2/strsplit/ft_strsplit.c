/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 18:05:28 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/25 23:14:32 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char const *str, int i, char c)
{
	char *dup;
	int j;
	int a;

	j = i;
	while (str[j] != '\0' && str[j] != c)
		j++;
	j -= i;
	if (!(dup = malloc(sizeof(char*) * j + 1)))
		return (NULL);
	a = 0;
	while (a < j)
	{
		dup[a] = str[i];
		a++;
		i++;
	}
	dup[a] = '\0';
	return (dup);
}

char	**ft_strsplit(char const *s, char c)
{
	char 	**str;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i++] != '\0')
	{
		if (s[i] == c)
			j++;
	}
	if (!(str = malloc(sizeof(char**) * j + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			str[j] = ft_strdup(s, i, c);
			j++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		if (s[i] != '\0')
			i++;
	}
	str[j] = 0;
	return (str);
}
