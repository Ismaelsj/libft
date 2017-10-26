/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 15:48:07 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/23 18:46:29 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	if (argc != 3)
		ft_putstr("Wrong number of arguments.\n");
	else
	{
		//ft_putstr(ft_strstr(argv[1], argv[2]));
		printf("%s\n", ft_strstr(argv[1], argv[2]));
	}
	return (0);
}
