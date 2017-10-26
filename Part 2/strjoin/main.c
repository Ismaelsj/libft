/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 16:06:57 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/25 16:52:08 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%s\n", ft_strjoin(argv[1], argv[2]));
	return (0);
}
