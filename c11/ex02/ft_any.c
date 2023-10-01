/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:35:54 by yxu               #+#    #+#             */
/*   Updated: 2023/08/24 16:51:50 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	result;

	result = 0;
	while (*tab != 0)
	{
		if (f(*tab++) != 0)
			result = 1;
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
	char	*tab[] = {"","",NULL};

	printf("%d\n", ft_any(tab,&ft_strlen));
}
*/