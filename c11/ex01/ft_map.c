/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:44:58 by yxu               #+#    #+#             */
/*   Updated: 2023/08/24 16:35:15 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	i = 0;
	result = (int *)malloc(sizeof(int) * length);
	if (result == NULL)
		return (NULL);
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}

/*
int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>
int	main()
{
	int	tab[] = {2,3,5,7,0};
	int* a = ft_map(tab, 5, &ft_recursive_factorial);
	for (int i=0;i<5;i++)
		printf("%d\n", a[i]);
}
*/