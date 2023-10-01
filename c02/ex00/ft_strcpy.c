/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:39:24 by yxu               #+#    #+#             */
/*   Updated: 2023/08/22 20:31:35 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	char	*origin;

	origin = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return (origin);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    char dest1[20] = "abcde";
	char dest2[20] = "abcde";
    char src[] = "12";

    char* result1 = strcpy(dest1, src);
	char* result2 = ft_strcpy(dest2, src);
    printf("strlcat %s: %s\n", dest1, result1);
	printf("ft_strlcat %s: %s\n", dest2, result2);
    return(0);
}
*/