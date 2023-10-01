/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:15:50 by yxu               #+#    #+#             */
/*   Updated: 2023/08/28 14:23:30 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	plus(int value1, int value2);
int	minus(int value1, int value2);
int	multi(int value1, int value2);
int	div(int value1, int value2);
int	mod(int value1, int value2);

void	write_num(long int num)
{
	if (num >= 10)
		write_num(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}

void	ft_putnbr(int nb)
{
	long int	num;

	num = nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	write_num(num);
	write(1, "\n", 1);
}

int	(*ops(char op))(int a, int b)
{
	int	(*f[5])(int, int);

	f[0] = &plus;
	f[1] = &minus;
	f[2] = &multi;
	f[3] = &div;
	f[4] = &mod;
	if (op == '+')
		return (f[0]);
	if (op == '-')
		return (f[1]);
	if (op == '*')
		return (f[2]);
	if (op == '/')
		return (f[3]);
	if (op == '%')
		return (f[4]);
	return (NULL);
}

int	do_op(int value1, char op, int value2)
{
	int	result;
	int	(*f)(int, int);

	f = ops(op);
	if (op == '/' && value2 == 0)
		return (1);
	if (op == '%' && value2 == 0)
		return (2);
	result = f(value1, value2);
	ft_putnbr(result);
	return (0);
}
