/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:56:24 by yxu               #+#    #+#             */
/*   Updated: 2023/08/25 22:51:40 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	check_base(char *base);
int	ft_strlen(char *str);

void	write_num_base(long int num, char *dest, char *base, int n)
{
	if (num < 0)
	{
		*dest = '-';
		num = -num;
	}
	if (num >= n)
		write_num_base(num / n, dest, base, n);
	while (*dest)
		dest++;
	*dest++ = base[num % n];
	*dest = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	char	*num_str;
	char	*num_str_cp;
	int		len_base_to;

	if (!(check_base(base_from) && check_base(base_to)))
		return (NULL);
	len_base_to = ft_strlen(base_to);
	num_str = (char *)malloc(34);
	if (num_str == NULL)
		return (NULL);
	num_str_cp = num_str;
	num = ft_atoi_base(nbr, base_from);
	write_num_base(num, num_str, base_to, len_base_to);
	return (num_str_cp);
}

/*
#include <stdio.h>
int main()
{
	printf("%s", ft_convert_base("    ---+--+2147483648sadf"
	, "0123456789", "01"));
}
*/