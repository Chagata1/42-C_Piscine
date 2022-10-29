/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:56:05 by ryayla            #+#    #+#             */
/*   Updated: 2022/07/25 13:04:32 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>
 
int main(void)
{
    int a;
    int b;
    int div;
    int mod;
    
    a= 120;
    b= 10;
    div = 0;
    mod = 0;
    ft_div_mod(a, b, &div, &mod);
    printf("%d\n%d\n", div, mod);
    
}
*/
