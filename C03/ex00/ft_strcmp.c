/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:42:56 by ryayla            #+#    #+#             */
/*   Updated: 2022/08/03 17:14:32 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	a;

	a = 0;
	while ((s1[a] == s2[a]) && (s1[a] != '\0' || s2[a] != '\0'))
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
/*
 int    main()
 {
     printf("%d", ft_strcmp("Hello", "Hello1"));
     printf("\n%d", ft_strcmp("Hello", "He"));
     printf("\n%d", ft_strcmp("He", "Hello"));
     printf("\n%d", ft_strcmp("Hello", "Hello"));
 }
 */
