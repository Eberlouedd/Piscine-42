/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:14:58 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/30 14:29:15 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	find_char(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	words_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((find_char(str[i - 1], charset)
				&& !find_char(str[i], charset) && i > 0)
			|| (!i && !find_char(str[i], charset)))
			count++;
		i++;
	}
	return (count);
}

int	ft_strlen(char *str, int i, char *sep)
{
	int	j;

	j = 0;
	while (str[i] && !find_char(str[i], sep))
	{
		i++;
		j++;
	}
	return (j);
}

char	**get_tab(char **tab, char *str, char *charset)
{
	int	i;
	int	j;
	int	k;
	int	len;

	i = 0;
	j = 0;
	while (str[i])
	{
		k = 0;
		while (str[i] && find_char(str[i], charset))
			i++;
		len = ft_strlen(str, i, charset);
		if (!len)
			return (tab);
		tab[j] = (char *)malloc(len + 1);
		if (!tab[j])
			return (NULL);
		while (str[i] && k < len)
			tab[j][k++] = str[i++];
		tab[j++][k] = '\0';
		tab[j] = NULL;
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		words_nb;
	char	**tab;
	char	**res;

	tab = NULL;
	res = (char **)malloc(sizeof(char *));
	res[0] = NULL;
	if (!str || !charset)
		return (NULL);
	words_nb = words_count(str, charset);
	if (!words_nb)
		return (res);
	tab = (char **)malloc(sizeof(char *) * (words_nb + 1));
	if (!tab)
		return (NULL);
	tab = get_tab(tab, str, charset);
	return (tab);
}
