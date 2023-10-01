/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:19:56 by yxu               #+#    #+#             */
/*   Updated: 2023/08/24 21:39:15 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

int	error_check(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
		&& argv[2][0] != '/' && argv[2][0] != '%') || ft_strlen(argv[2]) != 1)
	{
		write(1, "0\n", 2);
		return (1);
	}
	return (0);
}

void	error_print(int flag)
{
	if (flag == 1)
		write(1, "Stop : division by zero\n", 24);
	if (flag == 2)
		write(1, "Stop : modulo by zero\n", 22);
}
