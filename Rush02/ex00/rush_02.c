/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 14:37:01 by lbarreta          #+#    #+#             */
/*   Updated: 2019/12/08 22:01:21 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "lib_rush02.h"
#include <fcntl.h>
#include "struct_dict.h"
#include <stdlib.h>

#include <stdio.h>

void	ft_print_number(char *number)
{
	ft_open_dict(number);
	return ;
}

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc != 2)
		write(1, "Error\n", 6);
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] < '0' || argv[1][i] > '9')
			{
				write(1, "Error\n", 6);
				return (0);
			}
			i++;
		}
		ft_print_number(argv[1]);
	}
	return (0);
}
