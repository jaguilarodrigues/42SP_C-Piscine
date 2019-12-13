/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 04:06:01 by jaqrodri          #+#    #+#             */
/*   Updated: 2019/12/12 06:51:00 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_str_len(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int		ft_check_base(char *str)
{
	int i;

	i = 1;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (*str)
	{
		if (*str == '+' || *str == '-')
			return (0);
		if (*str < 32 || *str > 126)
			return (0);
		i = 1;
		while (str[i] != '\0')
		{
			if (*str == str[i])
				return (0);
			i++;
		}
		str++;
	}
	return (1);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int tam;
    int aux;
    unsigned int nbru;

    if (ft_check_base(base) == 0)
        write(1, "ERROR\n", 7);
    
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbru= -nbr;
    }
	else
		nbru = nbr;
    tam = ft_str_len(base);
    aux = nbru % tam;
    nbru = nbru / tam;
    if (nbru > 0)
        ft_putnbr_base(nbru, base);
    ft_putchar(base[aux]);

}