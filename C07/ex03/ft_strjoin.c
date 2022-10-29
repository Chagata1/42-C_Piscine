/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryayla <ryayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:36:35 by ryayla            #+#    #+#             */
/*   Updated: 2022/08/11 13:36:38 by ryayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	total_length(char **strs, int size, char *sep)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (i < size)
	{
		count += (ft_strlen(strs[i]));
		if (i != size - 1)
			count += (ft_strlen(sep));
		i++;
	}
	return (count + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{	
	int		i;
	int		j;
	int		k;
	char	*arr;

	arr = (char *) malloc(total_length(strs, size, sep));
	i = -1;
	k = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
			arr[++k] = strs[i][j];
		j = -1;
		while (sep[++j] != '\0' && i != (size - 1))
			arr[++k] = sep[j];
	}
	arr[k + 1] = '\0';
	return (arr);
}
/*
 int    main(void)
 {
     int        index;
     char    **strs;
     char    *separator;
     char    *result;
     int    size;

     size = 3;
     strs = (char **)malloc(3 * sizeof(char *));
     strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
     strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
     strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
     strs[0] = "Hello";
     strs[1] = "friend,";
     strs[2] = "you are awesome";
     separator = " ";
     result = ft_strjoin(size, strs, separator);
     printf("%s$\n", result);
     free(result);
 }
 */
