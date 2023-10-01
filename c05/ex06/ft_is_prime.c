/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:54:37 by yxu               #+#    #+#             */
/*   Updated: 2023/08/19 23:01:50 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	while (sqrt <= 46340 && sqrt * sqrt <= nb)
		sqrt++;
	return (sqrt);
}

int	ft_is_prime(int nb)
{
	int	nb_sqrt;

	if (nb <= 1)
		return (0);
	nb_sqrt = ft_sqrt(nb);
	while (nb_sqrt >= 2)
	{
		if (nb % nb_sqrt == 0 && nb / nb_sqrt >= 2)
			return (0);
		nb_sqrt--;
	}
	return (1);
}

/*
#include <stdio.h>
int	main()
{
	int i = -10;
	while (i <= 20)
	{
		printf("%d is prime: %d\n", i, ft_is_prime(i));
		i++;
	}
}
*/