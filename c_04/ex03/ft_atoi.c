/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:30:53 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/21 19:02:56 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nb_zero(char *str, int j, int n)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	while (str[j] >= '0' && str[j] <= '9')
	{
		j++;
	}
	j -= n + 1;
	while (i < j)
	{
		res = res * 10;
		i++;
	}
	return (res);
}

int	pair(int n, int s)
{
	if (s % 2 == 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}

int	conv(char c)
{
	return ((int)c - 48);
}

void	ft_init(int *a, int *b, int *c)
{
	*a = 0;
	*b = 0;
	*c = 0;
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	signe;
	int	memory;

	ft_init(&i, &signe, &memory);
	while (str[i] == '-' || str[i] == '+' || (((str[i] >= 9 && str[i] <= 13)
				|| str[i] == ' ') && memory != 1))
	{
		if (str[i] == '-' || str[i] == '+')
			memory = 1;
		if (str[i] == '-')
			signe++;
		i++;
	}
	result = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			break ;
		result += conv(str[i]) * nb_zero(str, i, i);
		i++;
	}	
	return (pair(result, signe));
}
