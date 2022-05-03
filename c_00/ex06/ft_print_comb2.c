/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:15:18 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/10 21:29:58 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ctoi(int a, int b)
{
	return (a * 10 + b);
}

void	ft_print_result(int a, int b, int c, int d)
{
	while (d <= 9)
	{
		if (ctoi(a, b) < ctoi(c, d))
		{
			ft_putchar('0' + a);
			ft_putchar('0' + b);
			write(1, " ", 1);
			ft_putchar('0' + c);
			ft_putchar('0' + d);
			if (a != 9 || b != 8 || c != 9 || d != 9)
			{
				write(1, ", ", 2);
			}
		}
		d++;
	}
	d = 0;
	c++;
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				ft_print_result(a, b, c, d);
				d = 0;
				c++;
			}
			c = 0;
			b++;
		}
		b = 0;
		a++;
	}
}
