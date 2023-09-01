/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:35:50 by yxu               #+#    #+#             */
/*   Updated: 2023/08/26 18:39:57 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "File name missing.", 18);
		return (0);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.", 19);
		return (0);
	}


	
	return (0);
}
