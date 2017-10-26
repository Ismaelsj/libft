/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 22:57:08 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/25 23:09:09 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_strsplit(char const *s, char c);
void	ft_printstr(char **str);

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_printstr(ft_strsplit(argv[1], ' '));
	return (0);
}
