/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 02:03:03 by jaqrodri          #+#    #+#             */
/*   Updated: 2019/12/04 00:58:47 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int aux[size];
	int tam;
	int i;

	tam = size - 1;
	i = 0;
	while (i < size)
	{
		aux[i] = tab[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[tam] = aux[i];
		tam--;
		i++;
	}
}
