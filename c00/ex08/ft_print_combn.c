/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 22:23:11 by yxu               #+#    #+#             */
/*   Updated: 2023/08/27 16:46:07 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);
int		change_and_check(char *num, int n);

int	change_and_check(char *num, int n)
{
	int		i;
	int		j;
	int		over;

	i = n - 1;
	j = 0;
	over = 0;
	while (i != n && num[i--] == 9 - j++ + '0')
	{
		if (j == n)
			over = 1;
		if (num[i] != 9 - j + '0')
		{
			num[i]++;
			i++;
			while (i != n)
			{
				num[i] = num[i - 1] + 1;
				i++;
			}
		}
	}
	return (over);
}

void	ft_print_combn(int n)
{
	char	num[11];
	int		over;
	int		i;

	over = 0;
	i = 0;
	while (i < 10)
	{
		num[i] = i + '0';
		i++;
	}
	num[10] = '\0';
	while (over == 0)
	{
		write(1, num, n);
		if (num[n - 1] == 9 + '0')
			over = change_and_check(num, n);
		else
			num[n - 1]++;
		if (over == 0)
			write(1, ", ", 2);
	}
}

/*
int	main(void)
{
	for (int i = 1;i<=9;i++)
	{
		ft_print_combn(i);
		write(1, "\n\n", 2);
	}
	return (0);
}
*/