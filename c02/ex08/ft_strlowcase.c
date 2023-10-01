/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:18:40 by yxu               #+#    #+#             */
/*   Updated: 2023/08/13 22:20:56 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	char	*origin;

	origin = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
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
    char *i = ft_strlowcase(str);
    write(1, i, 13);
    return 0;
}
*/