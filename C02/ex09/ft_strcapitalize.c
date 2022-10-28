/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:47:34 by ryayla            #+#    #+#             */
/*   Updated: 2022/08/01 12:53:56 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] += 32;
		}
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	ft_strlowcase(str);
	if (str[a] <= 'z' && str[a] >= 'a')
	{
		str[a] -= 32;
	}
	while (str[a] != '\0')
	{
		if (str[a + 1] != '\0')
		{
			if ((str[a] >= 32 && str[a] <= 47)
				|| (str[a] >= 58 && str[a] <= 64)
				|| (str[a] >= 91 && str[a] <= 96)
				|| (str[a] >= 123 && str[a] <= 127))
			{	
				if (str[a + 1] <= 'z' && str[a + 1] >= 'a')
					str[a + 1] -= 32;
			}
		}
		a++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
    char	str[] = "merhabalar. sizinle tanistigima mem-nun oldum! nasılsınız?";
    char	str1[] = "asfjaasasgatigawi,,aqwtqwtas,g,q3ty,%&/=^)(%&=";

    printf("%s", ft_strcapitalize(str));
    printf("\n%s", ft_strcapitalize(str1));
}
*/
