/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:36:02 by ryayla            #+#    #+#             */
/*   Updated: 2022/08/11 13:36:05 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*dest;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	i = (max - min);
	dest = (int *) malloc(sizeof(int) * i);
	if (!dest)
		return (0);
	else
	{
		i = 0;
		while (min + i < max)
		{
			dest[i] = min + i;
			i++;
		}
	}
	return (dest);
}
/*
 int        main(void)
 {
     int    min;
     int    max;
     int    *tab;
     int    i = 0;
     int    size;

     min = 5;
     max = 10;
     size = max - min;
     tab = ft_range(min, max);
     while(i < size)
     {
         printf("%d, ", tab[i]);
         i++;
     }

 }
 */
