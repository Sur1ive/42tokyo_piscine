/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:26:08 by yxu               #+#    #+#             */
/*   Updated: 2023/08/27 16:44:25 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num(unsigned long long num)
{
	if (num >= 16)
		write_num(num / 16);
	write(1, &"0123456789abcdef"[num % 16], 1);
}

void	write_space(int num)
{
	while (num-- > 0)
		write(1, " ", 1);
}

void	ft_putline(char *str, int i, int len)
{
	while (str[i] && len > 0)
	{
		if (str[i] >= ' ' && str[i] <= '~')
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
		len--;
	}
	if (str[i] == '\0' && len != 0)
		write(1, ".", 1);
	write(1, "\n", 1);
}

void	ft_putlastline(char *str, int size)
{
	if (size % 16 != 0)
	{
		if ((size % 16) % 2 == 0)
			write_space(5 * ((16 - size % 16) / 2));
		else
			write_space(3 + 5 * ((16 - size % 16) / 2));
		ft_putline(str, size - (size % 16), 16);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)addr;
	while (i < (int)size)
	{
		if (i % 16 == 0)
		{
			write_num((unsigned long long)&str[i]);
			write(1, ": ", 2);
		}
		write(1, &"0123456789abcdef"[(unsigned char)str[i] / 16], 1);
		write(1, &"0123456789abcdef"[(unsigned char)str[i] % 16], 1);
		if (i % 2 == 1)
			write(1, " ", 1);
		if (i % 16 == 15)
			ft_putline(str, i - 15, 16);
		i++;
	}
	ft_putlastline(str, size);
	return (addr);
}
#include <stdlib.h>
#include <stdio.h>
int main() {
	char data[11];
	int i = 0;
	while (i < 10)
	{
		data[i] = i + '0';
		i++;
	}
	data[10] = '\0';
	ft_print_memory(data, sizeof(data));
	printf("address of first char: %p\n",data);
	return 0;
}
