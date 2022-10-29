/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:29:58 by ryayla            #+#    #+#             */
/*   Updated: 2022/07/27 18:32:20 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			a++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
    printf("%d", ft_str_is_lowercase("abcdefgashasgjjaslfkj"));
     printf("\n%d", ft_str_is_lowercase("aws243dals24234gja41slgkjaasd"));
     printf("\n%d", ft_str_is_lowercase("__##aksh123aas4243236gjwl__^^&&"));
}
*/
