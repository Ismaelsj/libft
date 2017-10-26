/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 15:35:13 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/23 18:49:55 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	char *str;
	char *s;

	i = 0;
	j = 0;
	str = (char*)haystack;
	s = (char*)needle;
	if (needle == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (s[j] == str[i + j])
		{
			if (s[j] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
