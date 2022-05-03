/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:49:18 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/30 16:51:19 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*retour;
	int	diff;

	if (max <= min)
		return (NULL);
	retour = malloc((max - min) * sizeof(int));
	i = 0;
	diff = max - min;
	if (diff < 0)
		diff *= -1;
	while (i < diff)
	{
		retour[i] = min;
		min++;
		i++;
	}
	return (retour);
}
