/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:04:12 by yxu               #+#    #+#             */
/*   Updated: 2023/08/31 18:36:10 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;

	i = 0;
	asc = -1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0 && asc == 1)
			return (0);
		if (f(tab[i], tab[i + 1]) < 0 && asc == 0)
			return (0);
		if (f(tab[i], tab[i + 1]) > 0)
			asc = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			asc = 1;
		i++;
	}
	return (1);
}

/*
int	ft_f(int a, int b)
{
	return (a - b);
}

#include <stdio.h>
int	main(void)
{
	int	asc[] = {-1, 0, 0, 2, 3, 4};
	int	des[] = {7, 6, 6, 6, 5, 5};
	int	a[] = {2, 9, 3, 4, 5, 6};

	printf("%d\n", ft_is_sort(a, 6, &ft_f));
}
*/