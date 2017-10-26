/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 13:51:37 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/25 14:01:02 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strnequ(char const *s1, char const *s2, unsigned int n);

int	main (int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", ft_strnequ(argv[1], argv[2], 7));
	return (0);
}

