/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:38:06 by yxu               #+#    #+#             */
/*   Updated: 2023/08/29 14:53:34 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// n = a * 24^3 + b * 24^2 + c * 24^1 + d * 24^0 : n -> index{a, b, c, d}
// n = 0 ~ 331775 (24^4 - 1)
char	**pattern(int n)
{
	const char	*patterns[24] = {"1234", "1243", "1324", "1342", "1423", "1432",
		"2134", "2143", "2314", "2341", "2413", "2431",
		"3124", "3142", "3214", "3241", "3412", "3421",
		"4123", "4132", "4213", "4231", "4312", "4321"};
	static char	*pattern_n[4];
	int			i;
	int			index[4];

	i = 0;
	index[0] = n / (24 * 24 * 24);
	index[1] = n % (24 * 24 * 24) / (24 * 24);
	index[2] = n % (24 * 24) / 24;
	index[3] = n % 24;
	while (i <= 3)
	{
		pattern_n[i] = (char *)patterns[index[i]];
		i++;
	}
	return (pattern_n);
}

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

#include <stdio.h>
int	main(void)
{
	int		i;
	int		j;
	int		n;
	char	**a;
	int		b[] = {4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2};

	n = 0;
	while (n <= 331775)
	{
		a = pattern(n++);
		if (check_repeat(a) && check_col_down(a, b) && check_col_up(a, b)
			&& check_row_left(a, b) && check_row_right(a, b))
		{
			i = 0;
			while (i <= 3)
			{
				j = 0;
				while (j <= 3)
				{
					printf("%c", a[i][j++]);
					if (j < 4)
						printf(" ");
				}
				i++;
				printf("\n");
			}
		}
	}
}
