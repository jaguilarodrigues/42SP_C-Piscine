/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 23:33:00 by jaqrodri          #+#    #+#             */
/*   Updated: 2019/12/10 23:33:02 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	ft_count_dict_char(int fd, int *n_char)
{
	char	char_content[0];
	int		a;

	a = 0;
	while (read(fd, char_content, 1))
	{
		a++;
	}
	*n_char = a;

}

void    ft_open_file(char *arq)
{
    int		fd;
    int		n_char;
    char	*dict_content;

    printf("hey!!! %s \n:", arq);

    fd = open(arq, O_RDONLY);
	if (fd == -1)
		write(1, "Error\n", 11);
	else
	{
		ft_count_dict_char(fd, &n_char);
		fd = open(arq, O_RDONLY);
		dict_content = (char*)malloc(n_char * sizeof(char));
		read(fd, dict_content, n_char);
		dict_content[n_char] = '\0';
		close(fd);

        printf("%s", dict_content);
		/*dict_struct = (t_dict *)malloc((cont_lin) * sizeof(t_dict));
		ft_pop_struct(dict_struct, dict_content);
		if (ft_strcmp(number,"0") != 0)
			ft_strzero(number);
		ft_build_block(number, dict_struct);*/
	}
}