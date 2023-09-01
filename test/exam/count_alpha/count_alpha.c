/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:23:13 by yxu               #+#    #+#             */
/*   Updated: 2023/08/30 17:34:02 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	abc_up(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
}

int	is_empty(int *lst, int len)
{
	while (len-- > 0)
	{
		if (*lst != 0)
			return (0);
		lst++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	charset[] = "qwertyuiopasdfghjklzxcvbnm";
	int		charcount[26] = {0};
	int		i = 0;

	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	abc_up(argv[1]);
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			charcount[argv[1][i] - 'a']++;
		i++;
	}
	i = 0;
	while (argv[1][i])
	{
		if (charcount[argv[1][i] - 'a'] != 0)
		{
			printf("%d%c", charcount[argv[1][i] - 'a'], argv[1][i]);
			charcount[argv[1][i] - 'a'] = 0;
			if (!is_empty(charcount, 26))
				printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
