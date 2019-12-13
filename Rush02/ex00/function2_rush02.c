/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function2_rush02.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 00:50:24 by jaqrodri          #+#    #+#             */
/*   Updated: 2019/12/08 22:28:31 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "lib_rush02.h"
#include "struct_dict.h"

void	ft_search_sruct(char *num, t_dict *d_struct)
{
	int	lin;

	lin = 0;
	while (lin < 41)
	{
		if (ft_strcmp(d_struct[lin].num, num) == 0)
			ft_putstr(d_struct[lin].desc_num);
		lin++;
	}
}

void	ft_search_len(int size, t_dict *d_struct)
{
	int lin;

	lin = 0;
	while (lin < 41)
	{
		if (d_struct[lin].size_of_num == size)
		{
			ft_putstr(d_struct[lin].desc_num);
		}
		lin++;
	}
}

void	ft_print_trio(char *trio, t_dict *dict_struct)
{
	char c;
	char dez[3];

	c = trio[0];
	if (trio[0] == '0' && trio[1] == '0' && trio[2] == '0')
		ft_search_sruct(&trio[2], dict_struct);
	if (c > '0')
	{
		ft_search_sruct(&c, dict_struct);
		ft_putstr("hundred");
	}
	if (trio[1] == '1')
	{
		dez[0] = trio[1];
		dez[1] = trio[2];
		dez[2] = '\0';
		ft_search_sruct(dez, dict_struct);
	}
	else
	{
		if (trio[1] > '1')
		{
			dez[0] = trio[1];
			dez[1] = '0';
			dez[2] = '\0';
			ft_search_sruct(dez, dict_struct);
		}
		if (trio[2] > '0')
			ft_search_sruct(&trio[2], dict_struct);
	}
}

void	ft_build_block(char *num_to_print, t_dict *dict_struct)
{
	int		size;
	int		p;
	int		i;
	char	trio[4];

	trio[3] = '\0';
	size = ft_strlen(num_to_print);
	i = 0;
	while (num_to_print[i] != '\0')
	{
		p = (size - i) % 3;
		if (p == 1)
			trio[2] = num_to_print[i];
		if (p == 2)
			trio[1] = num_to_print[i];
		if (p == 0)
			trio[0] = num_to_print[i];
		if (p == 1)
		{
			ft_print_trio(trio, dict_struct);
			if ((size - i) > 3)
				ft_search_len((size - i), dict_struct);
		}
		i++;
	}
}

char	*ft_zero_clear(char *str)
{
	//int i;

	/*i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}*/
	return (str);
}
