/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:08:34 by ryayla            #+#    #+#             */
/*   Updated: 2022/07/27 20:14:51 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 32 && str[a] <= 127))
		{
			a++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
    printf("%d", ft_str_is_printable("ABCDEFGHASD"));
    printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}
*/
