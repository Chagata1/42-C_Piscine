/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:08:57 by ryayla            #+#    #+#             */
/*   Updated: 2022/07/25 14:29:23 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
#include <stdio.h>
int main(void)
{
    int a;
    int b;
    
    a = 120;
    b = 10;
    
    ft_ultimate_div_mod(&a, &b);
    printf("%d\n%d\n", a, b);
    return (0);
}
*/
