/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:16:53 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/24 18:23:28 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	racine;
	int	res;

	res = 0;
	racine = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (racine <= nb / 2 && racine < 46341)
	{
		res = racine * racine;
		if (res == nb)
		{
			return (racine);
		}
		racine++;
	}
	return (racine);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	compare;

	compare = ft_sqrt(nb);
	i = 2;
	if (nb == 1 || nb <= 0)
		return (0);
	while (i <= compare)
	{
		if (nb == 2)
		{
			return (1);
		}
		else if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
