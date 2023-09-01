/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:44:27 by yxu               #+#    #+#             */
/*   Updated: 2023/08/28 14:26:43 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + src_len);
	dest += dest_len;
	size -= dest_len;
	while (*src && size-- != 1)
		*dest++ = *src++;
	*dest = '\0';
	return (dest_len + src_len);
}


#include <stdio.h>
#include <string.h>
int main()
{
    char dest1[20] = "1234231";
	char dest2[20] = "1234231";
    char src[] = "Worldhdafhadkgsdhfghdfkhgkhsdfgdf";

    // unsigned int result1 = strlcat(dest1, src, x);
    // printf("strlcat %s: %u\n", dest1, result1);
	unsigned int result2 = ft_strlcat(dest2, src, -1);
	printf("ft_strlcat %s: %u\n", dest2, result2);
    return(0);
}
