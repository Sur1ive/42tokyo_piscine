/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:56:45 by yxu               #+#    #+#             */
/*   Updated: 2023/08/14 17:49:41 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*origin;

	origin = dest;
	while ((*src != '\0') && (n > 0))
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (origin);
}

/*
#include <stdio.h>
int main()
{
	char	a[] = "aaslkfdjl;aj";
	char	b[] = "365464543654654654";
	char	*ori;
	ori = ft_strncpy(b, a, 5);
	printf("return:%s\n",ori);
	printf("dest:%s",b);
}
*/