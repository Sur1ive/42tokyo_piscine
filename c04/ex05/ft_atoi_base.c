/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:56:43 by yxu               #+#    #+#             */
/*   Updated: 2023/08/21 17:04:31 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
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
		if (*base == '+' || *base == '-'
			|| (*base >= 0x09 && *base <= 0x0d) || *base == ' ')
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

int	atoint_base(char a, char *base)
{
	int	n;

	n = 0;
	while (a != *base && *base != '\0')
	{
		base++;
		n++;
	}
	if (*base == '\0')
		n = -1;
	return (n);
}

int	stoint_base(char *str, char *base)
{
	int	num;
	int	i;
	int	n;

	num = 0;
	n = ft_strlen(base);
	while (*str)
	{
		i = atoint_base(*str++, base);
		if (i == -1)
			break ;
		num *= n;
		num += i;
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;

	sign = 1;
	if (!check_base(base))
		return (0);
	while ((*str >= 0x09 && *str <= 0x0d) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	return (stoint_base(str, base) * sign);
}

/*
#include <stdio.h>
int main()
{
	printf("%d", ft_atoi_base("    ---+--+aaaabbbb1ba", "ab"));
}
*/