/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:00:43 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/22 18:11:26 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_init(int *n, int *i, int *c)
{
	*n = 0;
	*i = 1;
	*c = 1;
}

int	main(int argc, char **argv)
{
	char	*min;
	int		n;
	int		i;
	int		c;

	ft_init(&n, &i, &c);
	while (c < argc)
	{
		min = argv[c];
		i = c;
		while (i < argc)
		{
			if (ft_strcmp(min, argv[i]) >= 0)
			{
				min = argv[i];
				n = i;
				argv[n] = argv[c];
			}
			argv[c] = min;
			i++;
		}
		write(1, argv[c], ft_strlen(argv[c]));
		write(1, "\n", 1);
		c++;
	}
}
