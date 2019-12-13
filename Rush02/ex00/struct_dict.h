/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_dict.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:59:53 by lbarreta          #+#    #+#             */
/*   Updated: 2019/12/08 22:08:31 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_DICT_H
# define STRUCT_DICT_H

struct	s_dict
{
	char	num[100];
	char	desc_num[100];
	int		size_of_num;
};
typedef struct s_dict	t_dict;
#endif
