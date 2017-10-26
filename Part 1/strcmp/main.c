/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 19:11:18 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/23 19:23:07 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putnbr(ft_strcmp(argv[1], argv[2]));
	else
		ft_putstr("Wrong number of arguments.");
	return (0);
}
