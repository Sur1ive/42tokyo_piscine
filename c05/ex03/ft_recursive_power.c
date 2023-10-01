/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:56:48 by yxu               #+#    #+#             */
/*   Updated: 2023/08/19 22:43:43 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	num;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	num = nb * ft_recursive_power(nb, power - 1);
	return (num);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_power(-5, -3));
}
*/