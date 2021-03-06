/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 13:56:38 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/25 14:05:45 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strnequ(char const *s1, char const *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && n-- > 0)
	{
		if (s1[i] != s2[i] && (s1[i] + 32) != s2[i] && (s1[i] - 32) != s2[i])
			return (0);
		i++;
	}
	return (1);
}
