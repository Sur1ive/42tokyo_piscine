/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:43:44 by yxu               #+#    #+#             */
/*   Updated: 2023/08/26 15:19:50 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_str(char **tab, int size)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	ft_sort_string_tab(char **tab)
{
	int	size;

	size = 0;
	while (tab[size])
		size++;
	ft_sort_str(tab, size);
}

/*
#include <stdio.h>
int	main(void)
{
	char *tab[] = {"x9HtcAhrXFN4","8xC30U2","b","f24jolIP9nc", NULL};
	ft_sort_string_tab(tab);
	for(int i=0;i<14;i++)
		printf("%s\n",tab[i]);
}
*/