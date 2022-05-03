/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:19:41 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/21 16:03:04 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	base_is_valide(char *str)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	if (ft_strlen(str) < 2)
		return (0);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
		{
			return (0);
		}
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nv_nb;

	nv_nb = nbr;
	if (base_is_valide(base))
	{
		if (nv_nb < 0)
		{
			ft_putchar('-');
			nv_nb *= -1;
		}
		if (nv_nb >= ft_strlen(base))
		{
			ft_putnbr_base(nv_nb / ft_strlen(base), base);
			ft_putnbr_base(nv_nb % ft_strlen(base), base);
		}
		else
		{
			ft_putchar(base[nv_nb]);
		}
	}
}
