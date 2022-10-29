/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:57:39 by ryayla            #+#    #+#             */
/*   Updated: 2022/07/27 19:17:57 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			a++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
    printf("%d", ft_str_is_uppercase("ASFLASFKJSAKFJLASFJLAKSFJLAKSFJLKJF"));
     printf("\n%d", ft_str_is_uppercase("aws243dals24234gja41slgkjaasd"));
     printf("\n%d", ft_str_is_uppercase("__##aksh123aas4243236gjwl__^^&&"));
}
*/
