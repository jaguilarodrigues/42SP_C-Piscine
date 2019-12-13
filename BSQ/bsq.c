/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 23:15:08 by jaqrodri          #+#    #+#             */
/*   Updated: 2019/12/10 23:15:11 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "lib_bsq.h"

int		main(int argc, char *argv[])
{
	int i;
    
	i = 1;
	if (argc <= 1)
		write(1, "Error\n", 6);
	else
	{
		while (argv[i] != '\0')
		{
			ft_open_file(argv[i]);
            i++;
		}
	}
	return (0);
}

