/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:01:33 by dtakami           #+#    #+#             */
/*   Updated: 2023/08/20 18:40:08 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		*to_int(char *s);
char	**pattern(int n);
void	print_pattern(char **pattern);
int		check_repeat(char **pattern);
int		check_col_up(char **pattern, int *vision);
int		check_col_down(char **pattern, int *vision);
int		check_row_left(char **pattern, int *vision);
int		check_row_right(char **pattern, int *vision);

void	rush01(char	*vision_str)
{
	int		*vision;
	int		n;
	char	**pattern_n;

	vision = to_int(vision_str);
	n = 0;
	while (n <= 331775)
	{
		pattern_n = pattern(n++);
		if (check_repeat(pattern_n)
			&& check_col_down(pattern_n, vision)
			&& check_col_up(pattern_n, vision)
			&& check_row_left(pattern_n, vision)
			&& check_row_right(pattern_n, vision))
		{
			print_pattern(pattern_n);
			return ;
		}
	}
	write(1, "Error\n", 6);
}
