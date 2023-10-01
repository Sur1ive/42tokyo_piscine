/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:59:44 by yxu               #+#    #+#             */
/*   Updated: 2023/08/18 11:41:49 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
		{
			write(1, str, 1);
		}
		else
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[(unsigned char)*str / 16], 1);
			write(1, &"0123456789abcdef"[(unsigned char)*str % 16], 1);
		}
		str++;
	}
}

/*
int main() {
	char inputString[] = "Coucou\ntu\\ vas bien ?";
	inputString[0] = -16;

	ft_putstr_non_printable(inputString);
	write(1, "\n", 1);
	return 0;
}
*/