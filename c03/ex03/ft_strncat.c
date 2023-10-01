/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:32:07 by yxu               #+#    #+#             */
/*   Updated: 2023/08/16 16:32:09 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_copy;

	dest_copy = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && nb-- != 0)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest_copy);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    char dest1[20] = "ABCDE";
	char dest2[20] = "ABCDE";
    char src[] = "1234";
    int x = 120;

    char* result1 = strncat(dest1, src, x);
	char* result2 = ft_strncat(dest2, src, x);
    printf("strncat %s: %s\n", dest1, result1);
	printf("ft_strncat %s: %s\n", dest2, result2);
    return(0);
}
*/