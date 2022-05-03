/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 22:35:01 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/11 14:50:45 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	min;
	int	n;
	int	i;
	int	c;

	n = 0;
	c = 0;
	i = 0;
	while (c < size)
	{
		min = tab[c];
		i = c;
		while (i < size)
		{
			if (min > tab[i])
			{
				min = tab[i];
				n = i;
				tab[n] = tab[c];
			}
			tab[c] = min;
			i++;
		}
		c++;
	}
}
