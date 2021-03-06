/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 22:30:25 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/10 22:30:55 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buff;

	i = 0;
	while (i < size / 2)
	{
		buff = tab[i];
		tab[i] = tab[size - (i + 1)];
		tab[size - (i + 1)] = buff;
		i++;
	}
}
