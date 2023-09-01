/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:37:34 by yxu               #+#    #+#             */
/*   Updated: 2023/08/16 22:10:46 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;
	int	smallest;
	int	smallest_index;

	i = 0;
	while (i < size)
	{
		smallest = 2147483647;
		j = i;
		while (j < size)
		{
			if (tab[j] < smallest)
			{
				smallest = tab[j];
				smallest_index = j;
			}
			j++;
		}
		tmp = tab[i];
		tab[i] = smallest;
		tab[smallest_index] = tmp;
		i++;
	}
}
