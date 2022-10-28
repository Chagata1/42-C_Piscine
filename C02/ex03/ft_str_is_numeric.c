/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:29:48 by ryayla            #+#    #+#             */
/*   Updated: 2022/08/01 11:54:50 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= '0' && str[a] <= '9')
			a++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf("%d", ft_str_is_numeric("12315126182579160971"));
     printf("\n%d", ft_str_is_numeric("aws243dals24234gja41slgkjaasd"));
     printf("\n%d", ft_str_is_numeric("__##aksh123aas4243236gjwl__^^&&"));
}
*/
