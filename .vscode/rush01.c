/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:30:33 by yxu               #+#    #+#             */
/*   Updated: 2023/08/11 21:27:59 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	rush(int x, int y);
void	rush_print(int i, int j, int x, int y);

void	rush_print(int i, int j, int x, int y)
{
	if (i * j == 1)
	{
		ft_putchar('/');
	}
	else if (j == 1 && i == x)
	{
		ft_putchar('\\');
	}
	else if (j == y && i == 1)
	{
		ft_putchar('\\');
	}
	else if (j == y && i == x)
	{
		ft_putchar('/');
	}
	else if (j == 1 || i == 1 || j == y || i == x)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

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
			rush_print(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
