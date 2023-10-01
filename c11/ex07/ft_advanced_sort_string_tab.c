/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:43:09 by yxu               #+#    #+#             */
/*   Updated: 2023/08/29 12:03:10 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tab[j + 1] && cmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

/*
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include <stdio.h>
int	main()
{
	char *tab[] = {"x9HtcAhrXFN4","8xC30U2","b"
		,"f24jolIP9nc","vCh13aJ6","nyMhBgpv","FdCPWoO6","dpzT"
		,"r51","CUtRGWZ1r","MdpSUmQLD5C","xQJmCM","SNKwq",NULL};
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	for(int i=0;tab[i];i++)
		printf("%s\n",tab[i]);
}
*/