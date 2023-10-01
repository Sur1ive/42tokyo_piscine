/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 21:02:29 by yxu               #+#    #+#             */
/*   Updated: 2023/08/13 22:17:27 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	char	*origin;

	origin = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (origin);
}

/*
#include <unistd.h>
int main()
{
    char str[] = "asdfKJ];[HDaF";
    char *i = ft_strupcase(str);
    write(1, i, 13);
    return 0;
}
*/