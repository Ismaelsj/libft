/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: IsMac <isidibe-@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 22:40:04 by IsMac             #+#    #+#             */
/*   Updated: 2017/10/25 23:05:28 by IsMac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putchar(char c);

void	ft_printstr(char **str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putstr(str[i]);
		ft_putchar('\n');
		i++;
	}
}