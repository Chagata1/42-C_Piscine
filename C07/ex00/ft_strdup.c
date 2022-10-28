/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:35:28 by ryayla            #+#    #+#             */
/*   Updated: 2022/08/11 13:35:32 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = (char *) malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (0);
	else
	{
		i = 0;
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
/*
 int        main(void)
 {
     char    *str;
     char    *allocated;

     str = "Hello World with malloc()";
     printf("original  : base  : $%s$ @ %p\n", str, str);
     allocated = strdup(str);
     printf("copied    : alloc : $%s$ @ %p\n", allocated, allocated);
     allocated = ft_strdup(str);
     printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
 }
 */
