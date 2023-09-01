/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:59:53 by ahirotsu          #+#    #+#             */
/*   Updated: 2023/08/13 11:18:41 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	cond(int i, int j, int x, int y);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			cond(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	cond(int i, int j, int x, int y)
{
	if (i == 1 && j == 1)
	{
		ft_putchar('A');
	}
	else if (i == x && j == 1)
	{
		ft_putchar('C');
	}
	else if (i == 1 && j == y)
	{
		ft_putchar('A');
	}
	else if (i == x && j == y)
	{
		ft_putchar('C');
	}
	else if (i == 1 || j == 1 || i == x || j == y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
