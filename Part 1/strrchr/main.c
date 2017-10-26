/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 14:43:08 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/21 17:01:45 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c);
void	ft_putstr(char *str);
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_putstr(ft_strrchr(argv[1], ft_atoi(argv[2])));
	}
	else
		ft_putstr("Wrong number of arguments.");
	return (0);
}
