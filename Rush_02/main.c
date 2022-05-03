/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:48:56 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/27 22:43:08 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

unsigned int	ft_atoi2(char *ch);
void	ft_print(char *ch);
int	ft_getnumber(unsigned int nb);
unsigned int	ft_power(unsigned int nb, int number);
void	corps(unsigned int nb, char **tab, int number);

int        ft_atoi(const char *str)
{
    int i;
    int n;
    int result;

    i = 0;
    n = 1;
    result = 0;
    while (str[i] <= 32)
        i++;
    if (str[i] == '-')
    {
        n = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += str[i] - '0';
        i++;
    }
    return (result * n);
}

int	ft_parcours(char **str)
{
	int	i;

	i = 0;
	while (str[1][i])
	{
		if (str[1][i] == '.')
			return (0);
		i++;	
	}
	if ((str[1][0] != '0' && ft_atoi(str[1]) == 0) || ft_atoi(str[1]) < 0
		|| ft_atoi(str[1]) > 4294967295)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int	nb;
	int	number;

	if(argc == 2)
	{
		if (!ft_parcours(argv))
			write(1, "Error\n", 6);
		else
		{
			nb = ft_atoi2(argv[1]);
			number = ft_getnumber(nb);
			//corps(nb, tab, number);
		}

	}
	else if (argc == 3)
	{
		write(1, "case 2\n", 6);
	}
	else
	{
		write(1, "case 2\n", 6);
	}

}
