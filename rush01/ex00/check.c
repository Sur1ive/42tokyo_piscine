/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:06:35 by yxu               #+#    #+#             */
/*   Updated: 2023/08/23 13:12:52 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_repeat(char **pattern)
{
	int	j;

	j = 0;
	while (j <= 3)
	{
		if (pattern[0][j] == pattern[1][j] || pattern[0][j] == pattern[2][j]
		|| pattern[0][j] == pattern[3][j] || pattern[1][j] == pattern[2][j]
		|| pattern[1][j] == pattern[3][j] || pattern[2][j] == pattern[3][j])
			return (0);
		j++;
	}
	return (1);
}

int	check_col_up(char **pattern, int *vision)
{
	int	i;
	int	j;
	int	max;
	int	num;

	j = 0;
	while (j <= 3)
	{
		i = 0;
		max = 0;
		num = 0;
		while (i <= 3)
		{
			if (pattern[i][j] - '0' > max)
			{
				max = pattern[i][j] - '0';
				num++;
			}
			i++;
		}
		if (num != vision[j++])
			return (0);
	}
	return (1);
}

int	check_col_down(char **pattern, int *vision)
{
	int	i;
	int	j;
	int	max;
	int	num;

	vision += 4;
	j = 0;
	while (j <= 3)
	{
		i = 3;
		max = 0;
		num = 0;
		while (i >= 0)
		{
			if (pattern[i][j] - '0' > max)
			{
				max = pattern[i][j] - '0';
				num++;
			}
			i--;
		}
		if (num != vision[j++])
			return (0);
	}
	return (1);
}

int	check_row_left(char **pattern, int *vision)
{
	int	i;
	int	j;
	int	max;
	int	num;

	vision += 8;
	i = 0;
	while (i <= 3)
	{
		j = 0;
		max = 0;
		num = 0;
		while (j <= 3)
		{
			if (pattern[i][j] - '0' > max)
			{
				max = pattern[i][j] - '0';
				num++;
			}
			j++;
		}
		if (num != vision[i++])
			return (0);
	}
	return (1);
}

int	check_row_right(char **pattern, int *vision)
{
	int	i;
	int	j;
	int	max;
	int	num;

	vision += 12;
	i = 0;
	while (i <= 3)
	{
		j = 3;
		max = 0;
		num = 0;
		while (j >= 0)
		{
			if (pattern[i][j] - '0' > max)
			{
				max = pattern[i][j] - '0';
				num++;
			}
			j--;
		}
		if (num != vision[i++])
			return (0);
	}
	return (1);
}
