/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:57:12 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/23 20:12:05 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultat;

	i = 0;
	resultat = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		resultat *= nb;
		i++;
	}
	return (resultat);
}
