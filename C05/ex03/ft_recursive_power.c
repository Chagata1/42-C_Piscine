/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:53:17 by ryayla            #+#    #+#             */
/*   Updated: 2022/08/10 15:06:27 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (result);
}
/*
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
    printf("%i", ft_recursive_power(5, 1));
}
*/
