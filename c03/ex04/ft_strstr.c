/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:41:57 by yxu               #+#    #+#             */
/*   Updated: 2023/08/16 16:31:52 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char	*tmp;
	char	*to_find_cp;

	to_find_cp = to_find;
	if (*to_find == '\0')
		return (str);
	while (*str && *to_find)
	{
		while (*str != *to_find_cp && *str)
			str++;
		if (*str)
		{
			tmp = str++;
			while (*tmp && *to_find_cp && *tmp == *to_find_cp)
			{
				tmp++;
				to_find_cp++;
			}
			if (*to_find_cp == '\0')
				return (--str);
			to_find_cp = to_find;
		}
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char dest1[20] = "ABCDE";
	char dest2[20] = "ABCDE";
    char src[] = "a";

    char* result1 = strstr(dest1, src);
	char* result2 = ft_strstr(dest2, src);
    printf("strstr %s\n", result1);
	printf("ft_strstr %s\n", result2);
    return(0);
}
*/