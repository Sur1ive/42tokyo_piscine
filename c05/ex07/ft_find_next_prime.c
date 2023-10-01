/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 23:02:23 by yxu               #+#    #+#             */
/*   Updated: 2023/08/19 23:22:05 by yxu              ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		nb = 0;
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_find_next_prime(1837681743));
}
*/