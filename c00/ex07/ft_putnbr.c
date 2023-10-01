/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:43:48 by yxu               #+#    #+#             */
/*   Updated: 2023/08/12 17:54:04 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long int	pow10(int nb);
long int	minus_or_0(long int num);
void		ft_putnbr(int nb);

long int	pow10(int nb)
{
	long int	result;

	result = 1;
	while (nb > 0)
	{
		result = result * 10;
		nb--;
	}
	return (result);
}

long int	minus_or_0(long int num)
{
	const char	nums[] = "0123456789";

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	else if (num == 0)
	{
		write(1, &nums[0], 1);
	}
	return (num);
}

void	ft_putnbr(int nb)
{
	const char	nums[] = "0123456789";
	long int	num;
	int			i;
	int			culc;

	num = nb;
	num = minus_or_0(num);
	i = 11;
	culc = 0;
	while (i >= 0)
	{
		culc = culc + num / pow10(i);
		if (culc != 0)
		{
			write(1, &nums[num / pow10(i)], 1);
		}
		num = num - num / pow10(i) * pow10(i);
		i--;
	}
}
