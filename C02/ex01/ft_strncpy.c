/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:39:28 by ryayla            #+#    #+#             */
/*   Updated: 2022/08/02 13:39:54 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char src[] = "Merhaba";
	char dest[] = "Dunya";
	char dest1[] = "Dunya1";
    
    printf ("%s", ft_strncpy(dest, src, 2));
    printf ("\n%s", strncpy(dest1, src, 2));
    printf ("\n%s", ft_strncpy(dest, src, 4));
    printf ("\n%s", strncpy(dest1, src, 4));
    printf ("\n%s", ft_strncpy(dest, src, 6));
    printf ("\n%s", strncpy(dest1, src, 6));
}
*/
