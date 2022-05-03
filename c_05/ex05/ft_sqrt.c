/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:08:45 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/23 17:07:16 by kyacini          ###   ########.fr       */
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
	return (0);
}
