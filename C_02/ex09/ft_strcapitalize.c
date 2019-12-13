/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:35:17 by jaqrodri          #+#    #+#             */
/*   Updated: 2019/12/07 05:09:59 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char		*ft_strcapitalize(char *str)
{
	int		i;
	char	ant;

	ant = '!';
	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((!((ant >= '0' && ant <= '9')
		|| (ant >= 'A' && ant <= 'Z')
		|| (ant >= 'a' && ant <= 'z')))
		&& (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
		ant = str[i - 1];
	}
	return (str);
}
