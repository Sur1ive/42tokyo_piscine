/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:56:34 by ahirotsu          #+#    #+#             */
/*   Updated: 2023/08/13 15:38:46 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
int		pow10(int nb);
int		addr_to_num(char *arg);
int		check_error(int argc, char *argv[]);

int	pow10(int nb)
{
	int	result;

	result = 1;
	while (nb > 0)
	{
		result = result * 10;
		nb--;
	}
	return (result);
}

int	addr_to_num(char *arg)
{
	int	i;
	int	num;

	while (*arg != '\0')
	{
		arg++;
	}
	arg--;
	i = 0;
	num = 0;
	while (*arg != '\0')
	{
		if ((*arg >= '0') && (*arg <= '9'))
		{
			num = num + (*arg - '0') * pow10(i);
			i++;
			arg--;
		}
		else
		{
			return (-1);
		}
	}
	return (num);
}

int	check_error(int argc, char *argv[])
{
	if (argc == 3)
	{
		if ((addr_to_num(argv[1]) == -1) || (addr_to_num(argv[2]) == -1))
		{
			write(1, "Input type error", 16);
			return (1);
		}
	}
	else if (argc != 1)
	{
		write(1, "Arguements number error", 23);
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	if (argc != 1)
	{
		if (!check_error(argc, argv))
		{
			num1 = addr_to_num(argv[1]);
			num2 = addr_to_num(argv[2]);
		}
	}
	if (num1 * num2 != 0)
	{
		rush(num1, num2);
	}
	return (0);
}
