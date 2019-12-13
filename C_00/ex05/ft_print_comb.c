/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 02:26:29 by jaqrodri          #+#    #+#             */
/*   Updated: 2019/11/27 23:23:41 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printseq(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = '0';
	d = '1';
	u = '2';
	while (c <= '7')
	{
		while (d <= '8')
		{
			while (u <= '9')
			{
				printseq(c, d, u);
				u++;
			}
			d++;
			u = d + 1;
		}
		c++;
		d = c + 1;
		u = d + 1;
	}
}
