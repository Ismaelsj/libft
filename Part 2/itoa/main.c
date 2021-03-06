/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 23:33:41 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/25 23:38:54 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_itoa(int n);
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s\n", ft_itoa(ft_atoi(argv[1])));
	return (0);
}
