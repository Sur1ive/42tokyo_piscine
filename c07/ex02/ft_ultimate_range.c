/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:31:51 by yxu               #+#    #+#             */
/*   Updated: 2023/08/25 22:45:50 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*list;
	int	i;
	int	n;

	n = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	list = (int *)malloc(sizeof(int) * (max - min));
	if (list == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min != max)
		list[i++] = min++;
	*range = list;
	return (n);
}

/*
#include <stdio.h>
int main()
{
	int	*range[100] = {NULL};
	int	len;

	len = ft_ultimate_range(range, 20, 30);
	printf("return: %d\n", len);
	for (int i = 0; i<10; i++)
    	printf("%d\n", range[0][i]);
    return(0);
}
*/
