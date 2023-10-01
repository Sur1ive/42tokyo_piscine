/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:54:44 by yxu               #+#    #+#             */
/*   Updated: 2023/08/22 13:30:39 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	n;
	int	len;

	n = size;
	len = ft_strlen(src);
	while (*src && (--n > 0))
	{
		*dest = *src;
		src++;
		dest++;
	}
	if (size != 0)
	{
		*dest = '\0';
	}
	return (len);
}

/*
#include <stdio.h>
int main()
{
	char	a[] = "aaslkfdjl;aj";
	char	b[] = "365464";
	int		len;
	len = ft_strlcpy(b, a, 3);
	printf("len:%d\n",len);
	printf("dest:%s",b);
}
*/