/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:36:07 by ryayla            #+#    #+#             */
/*   Updated: 2022/08/01 11:46:28 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			a++;
		else if (str[a] >= 'a' && str[a] <= 'z')
			a++;
		else
			return (0);
	}
	return (1);
}
/*
 #include <stdio.h>
 int    main()
 {
     printf("%d", ft_str_is_alpha("abcdefghasdasgasgas"));
     printf("\n%d", ft_str_is_alpha("aws243dals24234gja41slgkjaasd"));
     printf("\n%d", ft_str_is_alpha("__##akshaasgjwl__^^&&"));
 }
*/
