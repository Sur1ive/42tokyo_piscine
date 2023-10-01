/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:44:21 by yxu               #+#    #+#             */
/*   Updated: 2023/08/16 16:32:27 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_copy;

	dest_copy = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
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
    char src[] = "asdf";

    char* result1 = strcat(dest1, src);
	char* result2 = ft_strcat(dest2, src);
    printf("strcat %s: %s\n", result1, dest1);
	printf("ft_strcat %s: %s\n", result2, dest2);
    return(0);
}
*/