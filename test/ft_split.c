/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:12:33 by yxu               #+#    #+#             */
/*   Updated: 2023/08/21 21:22:13 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

char	*copy_head_to_tail(char *str, int head, int tail)
{
	char	*cp;
	char	*cp_index;

	cp = (char *)malloc(tail - head + 1);
	cp_index = cp;
	while (tail != head)
		*cp++ = str[head++];
	*cp = '\0';
	return (cp_index);
}

int	is_in(char a, char *str)
{
	while (*str)
	{
		if (a == *str)
			return (1);
		str++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	int		head;
	int		tail;
	int		j;
	char	**splited;

	splited = (char **)malloc(ft_strlen(str) * 8);
	tail = 0;
	head = 0;
	j = 0;
	while (str[tail] != '\0')
	{
		if (is_in(str[tail], charset))
		{
			if (tail > head)
				splited[j++] = copy_head_to_tail(str, head, tail);
			head = tail + 1;
		}
		tail++;
	}
	if (tail > head)
		splited[j++] = copy_head_to_tail(str, head, tail);
	splited[j] = 0;
	return (splited);
}

/*
#include <stdio.h>
int main()
{
	char **splited = ft_split("   123    5aa4a adf03aa sdf a    ", " ");
	int i = 0;
	while (splited[i] != 0)
		printf("%s\n", splited[i++]);
}
*/