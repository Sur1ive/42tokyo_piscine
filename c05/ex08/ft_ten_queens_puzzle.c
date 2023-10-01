/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 23:23:49 by yxu               #+#    #+#             */
/*   Updated: 2023/08/26 18:19:33 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_ok(char *solution, int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (solution[i] - '0' == col)
			return (0);
		if (solution[i] - '0' + row - i == col)
			return (0);
		if (solution[i] - '0' - row + i == col)
			return (0);
		i++;
	}
	return (1);
}

void	solve(char *solution, int row, int col, int *count)
{
	if (is_ok(solution, row, col) && row == 9 && col <= 9)
	{
		solution[row] = col + '0';
		write(1, solution, 10);
		write(1, "\n", 1);
		*count += 1;
		return ;
	}
	if (row > 9 || col > 9)
		return ;
	if (is_ok(solution, row, col))
	{
		solution[row] = col + '0';
		solve(solution, row + 1, 0, count);
	}
	solve(solution, row, col + 1, count);
}

int	ft_ten_queens_puzzle(void)
{
	char	solution[10];
	int		count;

	count = 0;
	solve(solution, 0, 0, &count);
	return (count);
}

/*
#include <stdio.h>
int	main()
{
	printf("result count: %d", ft_ten_queens_puzzle());
}
*/