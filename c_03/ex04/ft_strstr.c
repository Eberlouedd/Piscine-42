/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:30:37 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/17 13:18:12 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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

void	ft_init(int *i, int *j, int *c)
{
	*i = 0;
	*j = 0;
	*c = 0;
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	c;

	ft_init(&i, &j, &c);
	while (str[i] || str[0] == '\0')
	{
		if (ft_strlen(to_find) > ft_strlen(str) - i)
		{
			return (NULL);
		}
		j = i;
		while (str[j] == to_find[c] && str[j] && to_find[c])
		{
			c++;
			j++;
		}
		if (c == ft_strlen(to_find))
		{
			return (str + i);
		}
		i++;
		c = 0;
	}
	return (NULL);
}
