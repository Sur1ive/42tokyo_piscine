/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:58:19 by yxu               #+#    #+#             */
/*   Updated: 2023/08/12 19:45:37 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_2num(int i, int j);
void	ft_print_comb2(void);

void	write_2num(int i, int j)
{
	const char	space = ' ';
	const char	comma = ',';
	const char	nums[] = "0123456789";

	write(1, &nums[i / 10], 1);
	write(1, &nums[i % 10], 1);
	write(1, &space, 1);
	write(1, &nums[j / 10], 1);
	write(1, &nums[j % 10], 1);
	if (i + j != 197)
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			write_2num(i, j);
			j++;
		}
		i++;
	}
}
