/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 19:11:18 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/23 19:38:02 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int len);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc == 4)
		ft_putnbr(ft_strncmp(argv[1], argv[2], ft_atoi(argv[3])));
	else
		ft_putstr("Wrong number of arguments.");
	return (0);
}
