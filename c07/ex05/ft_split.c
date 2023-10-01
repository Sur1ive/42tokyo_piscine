/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:12:33 by yxu               #+#    #+#             */
/*   Updated: 2023/08/25 22:44:42 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*copy_head_to_tail(char *str, int head, int tail)
{
	char	*cp;
	char	*cp_index;

	cp = (char *)malloc(tail - head + 1);
	if (cp == NULL)
		return (NULL);
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

void	ft_split_sub(char **splited, char *str, char *charset)
{
	int		head;
	int		tail;
	int		j;

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
}

int	count_words(char *str, char *charset)
{
	int	flag;
	int	num_of_words;
	int	len;

	len = 0;
	num_of_words = 0;
	while (str[len] != '\0')
	{
		flag = 0;
		while (is_in(str[len], charset) && str[len])
			len++;
		while (!is_in(str[len], charset) && str[len])
		{
			flag = 1;
			len++;
		}
		if (flag == 1)
			num_of_words += 1;
	}
	return (num_of_words);
}

char	**ft_split(char *str, char *charset)
{
	char	**splited;
	int		num_of_words;

	num_of_words = count_words(str, charset);
	splited = (char **)malloc((num_of_words + 1) * sizeof(char *));
	if (splited == NULL)
		return (NULL);
	ft_split_sub(splited, str, charset);
	while (num_of_words > 0)
	{
		if (splited[num_of_words-- - 1] == NULL)
			return (NULL);
	}
	return (splited);
}

/*
#include <stdio.h>
int main()
{
	char **splited = ft_split("  123  ;;  ;5aa;;;4a; adf03a sdf a    ;;", " ;.");
	int i = 0;
	while (splited[i] != 0)
		printf("%s\n", splited[i++]);
}
*/