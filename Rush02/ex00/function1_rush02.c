/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function1_rush02.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 15:24:40 by lbarreta          #+#    #+#             */
/*   Updated: 2019/12/08 21:49:57 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "lib_rush02.h"
#include "struct_dict.h"

/*
** Conta o número de caracteres existentes no dicionário **
** e o número de linhas(:) do dicionário **
*/
void	ft_count_dict_char(int fd, int *n_char, int *cont_lin)
{
	char	char_content[0];
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (read(fd, char_content, 1))
	{
		if (char_content[0] == ':')
			b++;
		a++;
	}
	*n_char = a;
	*cont_lin = b;
}

/*
** Popula a struct com os números e a quantidade de dígitos **
*/
void	ft_write_num(int *i, int lin, char *d_content, t_dict *d_struct)
{
	int pos_s;
	int j;

	j = *i;
	pos_s = 0;
	while (d_content[j] != ':')
	{
		if (d_content[j] >= '0' && d_content[j] <= '9')
		{
			d_struct[lin].num[pos_s] = d_content[j];
			pos_s++;
		}
		j++;
	}
	d_struct[lin].size_of_num = pos_s;
	*i = j;
}

/*
** Popula a struct com os valores do dicionário **
*/
void	ft_pop_struct(t_dict *dict_struct, char *d_content)
{
	int i;
	int lin;
	int pos_s;

	i = 0;
	lin = 0;
	while (d_content[i] != '\0')
	{
		ft_write_num(&i, lin, d_content, dict_struct);
		pos_s = 0;
		while (d_content[i] != '\n' && d_content[i] != '\0')
		{
			if (d_content[i] >= 'a' && d_content[i] <= 'z')
			{
				dict_struct[lin].desc_num[pos_s] = d_content[i];
				pos_s++;
			}
			i++;
		}
		dict_struct[lin].desc_num[pos_s] = '\0';
		pos_s = 0;
		lin++;
	}
}

/*
** Abre o arquivo com o dicionário e manda as informações para **
** popular a struct **
*/
void	ft_open_dict(char *number)
{
	int		fd;
	int		n_char;
	int		cont_lin;
	char	*dict_content;
	t_dict 	*dict_struct;

	fd = open("dict_en.txt", O_RDONLY);
	if (fd == -1)
		write(1, "Dict Error\n", 11);
	else
	{
		ft_count_dict_char(fd, &n_char, &cont_lin);
		fd = open("dict_en.txt", O_RDONLY);
		dict_content = (char*)malloc(n_char * sizeof(char));
		read(fd, dict_content, n_char);
		dict_content[n_char] = '\0';
		close(fd);
		dict_struct = (t_dict *)malloc((cont_lin) * sizeof(t_dict));
		ft_pop_struct(dict_struct, dict_content);
		ft_build_block(number, dict_struct);
	}
}
