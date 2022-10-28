/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:18:49 by bsavas            #+#    #+#             */
/*   Updated: 2022/07/24 18:37:12 by bsavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int genislik, int uzunluk)

{
	int	y;
	int	x;

	y = 0;
	while (y++ < uzunluk)
	{
		x = 0;
		while (x++ < genislik)
		{
			if (y == 1 && (x == 1 || x == genislik))
				ft_putchar('A');
			else if (y == uzunluk && (x == 1 || x == genislik))
				ft_putchar('C');
			else if ((x == 1 || x == genislik) || (y == 1 || y == uzunluk))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
