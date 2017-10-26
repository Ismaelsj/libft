/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 14:34:16 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/25 11:55:04 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);
void	ft_tolower(char *s);
void	ft_striter(char *s, void (*f)(char*));

int	main()
{
	char *str;

	str = "BONJOUR\n";
	ft_putstr(str);
	ft_striter(str, &ft_tolower);
	printf("%s\n", str);
	return (0);
	return (0);
}
