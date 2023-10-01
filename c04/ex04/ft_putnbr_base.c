/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:44:11 by yxu               #+#    #+#             */
/*   Updated: 2023/08/21 17:04:01 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

void	write_num(long int num, char *base, int n)
{
	if (num >= n)
		write_num(num / n, base, n);
	write(1, &base[num % n], 1);
}

int	check_base(char *base)
{
	char	*base_cp;
	int		n;

	n = ft_strlen(base);
	base_cp = base;
	if (n <= 1)
		return (0);
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-')
			return (0);
		base++;
	}
	while (*base_cp != '\0')
	{
		base = base_cp + 1;
		while (*base != '\0')
		{
			if (*base++ == *base_cp)
				return (0);
		}
		base_cp++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			n;
	long int	num;

	num = nbr;
	n = ft_strlen(base);
	if (!check_base(base))
		return ;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	write_num(num, base, n);
}

/*
#include <limits.h>
int main()
{
	ft_putnbr_base(-INT_MAX, "0123456789ABCDEF");
}
*/