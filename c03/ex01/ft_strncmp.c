/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:37:43 by yxu               #+#    #+#             */
/*   Updated: 2023/08/16 19:48:46 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 && --n != 0)
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
    char src[] = "asdf";
    int x = 1;

    int result1 = strncmp(dest1, src, x);
	int result2 = ft_strncmp(dest2, src, x);
    printf("strncmp %s: %d\n", dest1, result1);
	printf("ft_strncmp %s: %d\n", dest2, result2);
    return(0);
}
*/