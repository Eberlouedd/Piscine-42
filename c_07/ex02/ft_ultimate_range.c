/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:42:46 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/30 16:52:43 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;

	if (max <= min)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int *));
	if (!range)
	{
		return (-1);
	}
	i = 0;
	diff = max - min;
	if (diff < 0)
		diff *= -1;
	range[0] = malloc((diff) * sizeof(int));
	while (i < diff)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (diff);
}
