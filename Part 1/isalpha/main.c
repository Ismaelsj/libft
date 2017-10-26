/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 22:53:47 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/23 23:05:57 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);
int	ft_isalpha(int c);

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", ft_isalpha(ft_atoi(argv[1])));
	return (0);
}
