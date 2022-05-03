/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:41:15 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/29 17:50:40 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*retour;
	int		i;
	int		taille;

	taille = 0;
	i = 0;
	while (src[taille])
		taille++;
	retour = malloc(sizeof(char) * (taille + 1));
	while (src[i])
	{
		retour[i] = src[i];
		i++;
	}
	retour[i] = '\0';
	return (retour);
}
