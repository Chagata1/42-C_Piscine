/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:33:10 by ryayla            #+#    #+#             */
/*   Updated: 2022/07/27 12:51:23 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	temp;

	a = 0;
	while (a <= size / 2)
	{
		temp = tab[a];
		tab[a] = tab[size - a - 1];
		tab[size - a - 1] = temp;
		a++;
	}
}
/*
#include <stdio.h>
int    main()
{
    int tab[5] = {0, 1, 2, 3, 4};
    int    size = 5;

    ft_rev_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
    return (0);
}
*/
