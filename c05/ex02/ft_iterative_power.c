/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:45:34 by yxu               #+#    #+#             */
/*   Updated: 2023/08/19 13:55:14 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power < 0)
		return (0);
	while (power-- > 0)
		num *= nb;
	return (num);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_iterative_power(0, 1));
}
*/