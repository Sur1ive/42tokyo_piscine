/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:37:25 by yxu               #+#    #+#             */
/*   Updated: 2023/08/30 17:05:11 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdio.h>

int	list_len(t_list *lst)
{
	int	len;

	if (lst == NULL)
		return (0);
	len = 1;
	while (lst->next)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*start;
	int		len;
	void	*tmp;

	start = lst;
	len = list_len(lst);
	if (len <= 1)
		return (lst);
	while (len-- > 0)
	{
		lst = start;
		while (lst->next)
		{
			if (!cmp(*(int *)(lst->data), *(int *)(lst->next->data)))
			{
				tmp = lst->data;
				lst->data = lst->next->data;
				lst->next->data = tmp;
			}
			lst = lst->next;
		}
	}
	return (start);
}

int	ascending(int a, int b)
{
	return (a <= b);
}

int	main()
{
	t_list	lst[10];
	int		lst_value[10];
	t_list	*p;
	for (int i = 0; i < 9; i++)
	{
		lst[i].next = &lst[i + 1];
		lst_value[i] = (i - 5)*(4 - i);
		lst[i].data = &lst_value[i];
	}
	lst[9].next = NULL;
	lst_value[9] = -1;
	lst[9].data = &lst_value[9];

	sort_list(&lst[0], &ascending);
	p = &lst[0];
	while ((*p).next)
	{
		printf("%d\n", *(int*)(p->data));
		p = (*p).next;
	}
	printf("%d\n", *(int*)(p->data));
}
