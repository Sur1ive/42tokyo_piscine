/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:09:23 by yxu               #+#    #+#             */
/*   Updated: 2023/08/24 21:36:11 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
int		do_op(int value1, char op, int value2);
int		error_check(int argc, char **argv);
void	error_print(int flag);

int	main(int argc, char *argv[])
{
	int	error_flag;

	error_flag = 0;
	if (!error_check(argc, argv))
	{
		error_flag = do_op(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]));
	}
	error_print(error_flag);
	return (0);
}
