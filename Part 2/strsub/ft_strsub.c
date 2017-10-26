/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 16:02:35 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/25 16:32:25 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, unsigned int len)
{
	char *str;
	int i;

	i = 0;
	if (!(str = malloc(sizeof(char*) * len + 1)))
		return (NULL);
	while (s[start + i] != '\0' && len-- > 0)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
