/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:50:27 by ryayla            #+#    #+#             */
/*   Updated: 2022/07/25 19:22:21 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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
/*
 int main()
{
    char *a = "Hello";
    printf("%d", ft_strlen(a));
}
*/
