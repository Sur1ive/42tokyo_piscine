/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:14:20 by yxu               #+#    #+#             */
/*   Updated: 2023/08/18 11:50:05 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    char dest1[20] = "abcde";
	char dest2[20] = "abcde";
    char src[] = "abcdef";

    int result1 = strcmp(dest1, src);
	int result2 = ft_strcmp(dest2, src);
    printf("strcmp %s: %d\n", dest1, result1);
	printf("ft_strcmp %s: %d\n", dest2, result2);
    return(0);
}
*/