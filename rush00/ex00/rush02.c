/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:41:54 by ryayla            #+#    #+#             */
/*   Updated: 2022/07/24 13:41:56 by ryayla           ###   ########.tr       */
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
