/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:25:19 by ryayla            #+#    #+#             */
/*   Updated: 2022/07/25 12:40:52 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>
#include <unistd.h>
int main()
{
    int x;
    int y;
    
    x = 5;
    y = 7;
    ft_swap(&x, &y);
    printf("%d\n", x);
    printf("%d", y);
}
*/
