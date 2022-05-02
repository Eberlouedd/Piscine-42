/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:06:15 by kyacini           #+#    #+#             */
/*   Updated: 2022/03/14 19:32:06 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha_min(char str)
{
	if (str < 97 || str > 122)
	{
		return (0);
	}
	return (1);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_alpha_min(str[i]))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
