/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:26:39 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/18 14:19:16 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	conv_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c > 16)
	{
		conv_hex(c / 16);
		conv_hex(c % 16);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hex[(int)c]);
	}
}

int	ft_str_is_printable_non(char str)
{
	if (str <= 31)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_printable_non(str[i]))
		{
			write(1, "\x5C", 1);
			conv_hex(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
