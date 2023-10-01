/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:44:13 by yxu               #+#    #+#             */
/*   Updated: 2023/08/24 15:15:08 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

/*
#include <unistd.h>

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
}

int	main()
{
	int	tab[] = {2134, 213442,3255,777,11};
	ft_foreach(tab, 5, &ft_putnbr);
}
*/