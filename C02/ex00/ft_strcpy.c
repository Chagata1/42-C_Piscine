/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:40:24 by ryayla            #+#    #+#             */
/*   Updated: 2022/08/01 11:43:40 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
 #include <stdio.h>
 #include <string.h>
 int main()
{
 char src[] = "selam";
 char src1[] ="selam";
 char dest[] = "merhabasdasfasfasfasfa";
 char dest1[] = "merhaba";
 
 printf("%s", ft_strcpy(dest, src));
 printf("\n%s", strcpy(dest1, src1));
}
*/
