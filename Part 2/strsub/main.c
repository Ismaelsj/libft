/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 16:06:57 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/25 16:28:26 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, unsigned int len);
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc == 4)
		printf("%s\n", ft_strsub(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3])));
	return (0);
}
