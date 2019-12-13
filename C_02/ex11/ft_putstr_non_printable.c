/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 23:08:09 by jaqrodri          #+#    #+#             */
/*   Updated: 2019/12/07 18:10:22 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hex_char(int l)
{
	if (l >= 0 && l <= 9)
		ft_putchar(l + '0');
	else if (l >= 10 && l <= 15)
		ft_putchar(l + 'a' - 10);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			write(1, "\\", 1);
			ft_put_hex_char(str[i] / 16);
			ft_put_hex_char(str[i] % 16);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
