/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:51:05 by dtakami           #+#    #+#             */
/*   Updated: 2023/08/23 16:41:43 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	error_check(int argc, char **argv)
{
	int	i;

	if ++|| ft_strlen(argv[1]) != 31)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	i = 0;
	while (i < 31)
	{
		if (i % 2 == 0 && (argv[1][i] < '0' + 1 || argv[1][i] > '0' + 4))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		else if (i % 2 == 1 && argv[1][i] != ' ')
		{
			write(1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}
