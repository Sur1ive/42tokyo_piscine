/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:52:09 by yxu               #+#    #+#             */
/*   Updated: 2023/08/24 17:03:35 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i++]) != 0)
			result++;
	}
	return (result);
}

/*
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

#include <stdio.h>
int	main()
{
	char	*tab[] = {"", "1", "", "sadfsf", NULL};

	printf("%d\n", ft_count_if(tab, 4 ,&ft_strlen));
}
*/