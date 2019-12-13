/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 23:33:46 by jaqrodri          #+#    #+#             */
/*   Updated: 2019/11/24 02:48:07 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char l;

	if (n < 0)
	{
		l = 'N';
		write(1, &l, 1);
	}
	else if (n >= 0)
	{
		l = 'P';
		write(1, &l, 1);
	}
}