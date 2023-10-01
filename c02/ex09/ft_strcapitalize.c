/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:21:32 by yxu               #+#    #+#             */
/*   Updated: 2023/08/15 17:49:33 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	char	*origin;

	origin = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (origin);
}

char	*ft_strcapitalize(char *str)
{
	char	*origin;
	int		flag;

	flag = 1;
	origin = str;
	ft_strlowcase(str);
	while (*str != '\0')
	{
		if (flag == 1 && (*str >= 'a' && *str <= 'z'))
		{
			flag = 0;
			*str = *str - 32;
		}
		if (!(*str >= '0' && *str <= '9')
			&& !((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		{
			flag = 1;
		}
		else
		{
			flag = 0;
		}
		str++;
	}
	return (origin);
}

/*
#include <unistd.h>
int main()
{
    char str[] = "salut, commSnt tu vas ? 42mots quarante-deux; cinquante+et+un";
    char *i = ft_strcapitalize(str);
    write(1, i, 61);
    return 0;
}
*/