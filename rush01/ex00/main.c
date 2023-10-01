/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:23:13 by yxu               #+#    #+#             */
/*   Updated: 2023/08/20 12:53:54 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush01(char	*vision_str);
int		error_check(int argc, char **argv);

int	main(int argc, char **argv)
{
	if (!error_check(argc, argv))
		rush01(argv[1]);
	return (0);
}
