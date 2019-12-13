/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbetti-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 08:35:57 by jbetti-c          #+#    #+#             */
/*   Updated: 2019/11/24 16:56:07 by jbetti-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	colunas(int n, char i, char m, char e)
{
	ft_putchar(i);
	n--;
	while (n > 1)
	{
		ft_putchar(m);
		n--;
	}
	if (n == 1)
		ft_putchar(e);
	write(1, "\n", 2);
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
	{
		write(1, "ERROR", 5);
	}
	else
	{
		colunas(x, 'A', 'B', 'A');
		y--;
		while (y > 1)
		{
			colunas(x, 'B', ' ', 'B');
			y--;
		}
		if (y == 1)
			colunas(x, 'C', 'B', 'C');
	}
}
