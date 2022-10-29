/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:40:47 by ryayla            #+#    #+#             */
/*   Updated: 2022/08/01 12:55:48 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	uzunluk;

	uzunluk = 0;
	while (str[uzunluk] != '\0')
	{
		uzunluk++;
	}
	return (uzunluk);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;

	a = 0;
	if (size != 0)
	{
		while (src[a] != '\0' && a < size - 1)
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
     char src[] = "Merhaba";
     char dest[] = "Dunya";
     char dest1[] = "Dunya1";
     
     printf ("%u", ft_strlcpy(dest, src,  2));
     printf ("\n%lu", strlcpy(dest1, src,  2));
     printf ("\n%u", ft_strlcpy(dest, src, 4));
     printf ("\n%lu", strlcpy(dest1, src, 4));
     printf ("\n%u", ft_strlcpy(dest, src, 6));
     printf ("\n%lu", strlcpy(dest1, src, 6));
 }
*/
