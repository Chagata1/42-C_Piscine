/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:36:17 by ryayla            #+#    #+#             */
/*   Updated: 2022/08/11 13:36:20 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return (0);
	tab = (int *) malloc(sizeof(int) * (max - min));
	if (!tab)
		return (-1);
	else
	{
		i = 0;
		while (max - min > i)
		{
			tab[i] = min + i;
			i++;
		}
		*range = tab;
		return (i);
	}
}
/*
 int        main(void)
 {
     int    min;
     int    max;
     int    *tab;
     int    size;
     int    i = 0;

     min = 5;
     max = 10;
     size = ft_ultimate_range(&tab, min, max);
     while(i < size)
     {
         printf("%d, ", tab[i]);
         i++;
     }

 }
 Footer

 */
