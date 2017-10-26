/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 22:53:47 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/23 23:59:37 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_atoi(char *str);
int	ft_toupper(int c);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", toupper(ft_atoi(argv[1])));
		printf("%d\n", ft_toupper(ft_atoi(argv[1])));
	}
	return (0);
}
