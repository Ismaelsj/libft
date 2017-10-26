/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 09:55:31 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/23 14:21:54 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	int i;
	int j;
	char *str;
	char *s;

	i = 0;
	j = 0;
	str = (char*)haystack;
	s = (char*)needle;
	//if (needle == 0)
	//	return (str);
	while (str[j] != '\0' && len-- > 0)
	{
		if (s[i] == str[j])
		{
			if (s[i] == '\0')
				return (s);
			i++;
		}
		j++;
	}
	return (0);
}
