/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 14:05:01 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/24 14:15:36 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_memdel(void **ap);

int	main()
{
	void **ptr;

	ptr = malloc(1);
	*ptr = malloc(8);
	*ptr = "Bonjour\n";
	printf("%s\n", ptr[0]);
	ft_memdel(ptr);
	printf("%s\n", ptr[0]);
	return (0);
}
