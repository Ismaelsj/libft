/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 14:43:08 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/22 15:13:08 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c);
void	ft_putstr(char *str);
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		//ft_putstr(ft_strchr(argv[1], ft_atoi(argv[2])));
		ft_putstr(strchr(argv[1], ft_atoi(argv[2])));
	}
	else
		ft_putstr("Wrong number of arguments.");
	return (0);
}
