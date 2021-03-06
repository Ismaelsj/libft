/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 14:39:25 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/22 15:09:35 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char* s, int c)
{
	char *str;

	str = (char*)s;
	while (*str != '\0')
	{
		if (*str == (char)c)	
			return (str);
		str++;
	}
	return (0);
}
