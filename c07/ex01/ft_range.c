/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:11:44 by yxu               #+#    #+#             */
/*   Updated: 2023/08/25 22:45:40 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*list;
	int	i;

	if (min >= max)
		return (NULL);
	list = (int *)malloc(sizeof(int) * (max - min));
	if (list == NULL)
		return (NULL);
	i = 0;
	while (min != max)
		list[i++] = min++;
	return (list);
}

/*
#include <stdio.h>
int main()
{
	int *list;
	list = ft_range(20, 30);
	for (int i = 0; i<10; i++)
    	printf("%d\n", list[i]);
    return(0);
}
*/
