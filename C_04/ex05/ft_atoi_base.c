/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 06:44:43 by jaqrodri          #+#    #+#             */
/*   Updated: 2019/12/10 06:44:46 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

long	ft_atoi(char *str)
{
	long num;
	int sinal;

	num = 0;
	sinal = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sinal = sinal * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * sinal);
}

int    ft_str_len(char *str)
{
    int i;
    i = 0;
    while(*str)
    {
        str++;
        i++;
    }
    return i;
}

int     ft_check_base(char *str)
{
    int i;

    i = 1;
    if(str[0] == '\0' || str[1] == '\0')
        return (0);
    while(*str)
    {
        if (*str == '+' || *str == '-')
            return (0);
        if (*str < 32 || *str >126)
            return (0);
        i = 1;
        while(str[i] != '\0')
        {
            if (*str == str[i])
                return (0);
            i++;
        }
        str++;
    }
    return (1);
}

int    ft_putnbr_base(long nbr, char *base)
{
    int tam;
    int aux;
    int sinal;
    int num;

    sinal = 1;
    num = 0;
    if (ft_check_base(base) == 0)
        write(1, "ERROR\n", 7);
    if (nbr < 0)
    {
        sinal = -1;
        nbr= -nbr;
    }
    tam = ft_str_len(base);
    aux = nbr % tam;
    nbr = nbr / tam;
    if (nbr > 0)
        ft_putnbr_base(nbr, base);
    num = num * 10 + (base[aux] - '0');

    return (num * sinal);

}

int ft_atoi_base(char *str, char *base)
{   
    int nbr;

    nbr = ft_atoi(str);
    return ft_putnbr_base(nbr, base);    
}

int main()
{
    printf("%d", ft_atoi_base("-50", "01"));

}