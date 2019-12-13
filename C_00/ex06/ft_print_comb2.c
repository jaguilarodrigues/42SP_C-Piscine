/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:48:09 by jaqrodri          #+#    #+#             */
/*   Updated: 2019/12/02 17:22:34 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	format(int num)
{
	char aux;

	if (num < 10)
	{
		write(1, "0", 1);
		aux = num + 48;
		write(1, &aux, 1);
	}
	else
	{
		aux = (num / 10) + 48;
		write(1, &aux, 1);
		aux = (num % 10) + 48;
		write(1, &aux, 1);
	}
}

void	fprint(int p, int s)
{
	format(p);
	write(1, " ", 1);
	format(s);
}

void	ft_print_comb2(void)
{
	int	n[2];

	n[0] = 0;
	n[1] = 1;
	while (n[0] <= 99)
	{
		while (n[1] <= 99)
		{
			fprint(n[0], n[1]);
			if ((n[0] == 98) && (n[1] == 99))
			{
			}
			else
			{
				write(1, ", ", 2);
			}
			n[1]++;
		}
		n[0]++;
		n[1] = n[0] + 1;
	}
}
