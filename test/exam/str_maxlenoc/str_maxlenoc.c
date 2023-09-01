/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_maxlenoc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:50:42 by yxu               #+#    #+#             */
/*   Updated: 2023/08/30 21:43:53 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*sub_str(char *str1, char *str2)
{
	int	i = 0;
	int	j;
	int	**matrix;
	int	str1len = ft_strlen(str1);
	int str2len = ft_strlen(str2);
	int	max = 0;
	int	max_j;
	int max_i;
	char *result;

	matrix = (int **)malloc(sizeof(int *) * str1len);
	while (i < str1len)
	{
		j = 0;
		matrix[i] = (int *)malloc(sizeof(int) * str2len);
		while (j < str2len)
			matrix[i][j++] = 0;
		i++;
	}
	i = 0;
	printf("matrix:\n");
	while (i < str1len)
	{
		j = 0;
		while (j < str2len)
		{
			if (str1[i] == str2[j] && (i == 0 || j == 0))
				matrix[i][j] = 1;
			if (str1[i] == str2[j] && (i != 0 && j != 0))
				matrix[i][j] = matrix[i - 1][j - 1] + 1;
			printf("%d ", matrix[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	i = 0;
	while (i < str1len)
	{
		j = 0;
		while (j < str2len)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
				max_i = i;
				max_j = j;
			}
			j++;
		}
		i++;
	}
	result = (char *)malloc(sizeof(char) * (max + 1));
	i = 0;
	while (max > 0)
		result[i++] = str2[max_j - max-- + 1];
	return (result);
}

int	main(int argc, char **argv)
{
	char	*sub;
	int		i = 0;

	if (argc <= 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	sub = argv[1];
	while (i < argc - 2)
		sub = sub_str(sub, argv[i++ + 2]);
	write(1, "result: ", 8);
	while (*sub)
		write(1, sub++, 1);
	write(1, "\n", 1);
	return (0);
}
