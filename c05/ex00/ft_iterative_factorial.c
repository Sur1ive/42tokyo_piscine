/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:37:55 by yxu               #+#    #+#             */
/*   Updated: 2023/08/19 11:43:21 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	num = 1;
	while (nb > 1)
	{
		num *= nb;
		nb--;
	}
	return (num);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_iterative_factorial(5));
}
*/