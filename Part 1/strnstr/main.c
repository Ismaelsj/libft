/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 15:48:07 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/23 10:04:17 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len);
void	ft_putstr(char *str);
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc != 4)
		ft_putstr("Wrong number of arguments.\n");
	else
		ft_putstr(ft_strnstr(argv[1], argv[2], ft_atoi(argv[3])));
	return (0);
}
