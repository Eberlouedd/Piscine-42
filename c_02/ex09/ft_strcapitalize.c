/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:21:57 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/17 15:17:16 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is(char str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')
		|| (str >= '0' && str <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}	
}

int	ft_str_is_alpha_min(char str)
{
	if (str >= 97 && str <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (ft_str_is_alpha_min(str[0]))
	{
		str[0] -= 32;
	}
	while (str[i])
	{
		if (ft_str_is_alpha_min(str[i]) && !ft_str_is(str[i - 1]))
		{
			str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && ft_str_is(str[i - 1]))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
