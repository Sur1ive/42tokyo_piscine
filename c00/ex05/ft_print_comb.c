/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:17:01 by yxu               #+#    #+#             */
/*   Updated: 2023/08/14 15:16:11 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_3num(int i, int j, int k);
void	ft_print_comb(void);

void	write_3num(int i, int j, int k)
{
	const char	nums[] = "0123456789";

	write(1, &nums[i], 1);
	write(1, &nums[j], 1);
	write(1, &nums[k], 1);
	if (i + j + k != 24)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				write_3num(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

/*
int main()
{
	ft_print_comb();
}
*/