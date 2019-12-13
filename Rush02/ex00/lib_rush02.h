/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_rush02.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 15:16:49 by lbarreta          #+#    #+#             */
/*   Updated: 2019/12/08 22:09:38 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_RUSH02_H
# define LIB_RUSH02_H
# include "struct_dict.h"

void	ft_print_number(char *number);
int		ft_count_numbers(char *number);
void	ft_open_dict(char *number);
void	ft_count_dict_char(int fd, int *n_char, int *cont_lin);
void	ft_pop_struct(t_dict *dict_struct, char *d_content);
void	ft_write_num(int *i, int lin, char *d_content, t_dict *d_struct);
int		ft_strlen(char *str);
void	ft_build_block(char *num_to_print, t_dict *dict_struct);
char	*ft_zero_clear(char *str);
void	ft_print_trio(char *trio, t_dict *dict_struct);
void	ft_search_len(int size, t_dict *dict_struct);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif
