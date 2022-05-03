/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:45:57 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/12 15:41:09 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void	ft_print_logic(int x, int y, int i, int c)
{
	if (c == 1 && i == 1)
	{
		ft_putchar('/');
	}
	else if (c == x && i == 1)
	{
		ft_putchar('\x5C');
	}
	else if (c == 1 && i == y)
	{
		ft_putchar('\x5C');
	}
	else if (c == x && i == y)
	{
		ft_putchar('/');
	}
	else if (((c == x || c == 1) && i != 1)
		|| (c != 1 && i == 1) || i == y)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	c;

	c = 1;
	i = 1;
	while (i <= y)
	{
		while (c <= x)
		{
			ft_print_logic(x, y, i, c);
			c++;
		}
		c = 1;
		ft_putchar('\n');
		i++;
	}
}
