/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:56:56 by yxu               #+#    #+#             */
/*   Updated: 2023/08/25 22:48:09 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcpy_tail(char *dest, char *src)
{
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		str_len;
	int		n;
	char	*str_cp;

	if (size == 0)
	{
		str = (char *)malloc(1);
		return (str);
	}
	n = size;
	str_len = 0;
	while (n-- != 0)
		str_len += ft_strlen(strs[n]);
	str = (char *)malloc((size - 1) * ft_strlen(sep) + str_len);
	str_cp = str;
	n = 0;
	while (n != 2 * size - 1)
	{
		if (n++ % 2 == 0)
			str = ft_strcpy_tail(str, *strs++);
		else
			str = ft_strcpy_tail(str, sep);
	}
	return (str_cp);
}

/*
#include <stdio.h>
int main()
{
	char	*a[] = {"asfasd", "12347861234", "", "/];[];", "adsfds"};
	char	*b = ft_strjoin(5, a, " ");
    printf("%s\n", b);
	free(b);
    return(0);
}
*/