
#include <unistd.h>

int	ft_getnumber(unsigned int nb)
{
	int	i;

	i = 0;
	while (nb > 999)
	{
		nb /= 1000;
		i++;
	}
	return (i);
}

void	ft_print(char *ch)
{
	int	i;

	i = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			write(1, &ch[i], 1);
		}
		i++;
	}
	write(1, " ", 1);
}

unsigned int	ft_atoi(char *ch)
{
	unsigned int	nb;
	int				i;

	nb = 0;
	i = 0;
	while (ch[i] != '\0')
	{
		nb = nb * 10 + (ch[i] - 48);
		i++;
	}
	return (nb);
}

unsigned int	ft_power(unsigned int nb, int number)
{
	unsigned int	res;

	res = 1;
	while (number > 0)
	{
		res = res * nb;
		number--;
	}
	return (res);
}

void	corps(unsigned int nb, char **tab, int number)
{
	unsigned int	nb1;

	if (number < 0)
		return ;
	if (nb == 0)
		ft_print(tab[0]);
	nb1 = nb / ft_power(1000, number);
	if (nb1 == 0 && number != 0)
		return (corps(nb % ft_power(1000, number), tab, number - 1));
	if (nb1 / 100 > 0)
	{
		ft_print(tab[nb1 / 100]);
		ft_print(tab[28]);
		nb1 = nb1 % 100;
	}
	if (nb1 < 20 && nb1 != 0)
		ft_print(tab[nb1]);
	if (nb1 >= 20)
	{
		ft_print(tab[18 + nb1 / 10]);
		if (nb1 % 10 != 0)
			ft_print(tab[nb1 % 10]);
	}
	if (number > 0)
		ft_print(tab[28 + number]);
	return (corps(nb % ft_power(1000, number), tab, number - 1));
}

int	main()
{
	char *ch;
	int nb;
	int number;
	
	ch = "123";
	char *tab[35];
	tab[0] = "zero";
	tab[1] = "one";
	tab[2] = "two";
	tab[3] = "three";
	tab[4] = "four";
	tab[5] = "five";
	tab[6] = "six";
	tab[7] = "seven";
	tab[8] = "eight";
	tab[9] = "nine";
	tab[10] = "ten";
	tab[11] = "eleven";
	tab[12] = "twelve";
	tab[13] = "thirteen";
	tab[14] = "fourteen";
	tab[15] = "fifteen";
	tab[16] = "sixteen";
	tab[17] = "seventeen";
	tab[18] = "eighteen";
	tab[19] = "nineteen";
	tab[20] = "twenty";
	tab[21] = "thirty";
	tab[22] = "fourty";
	tab[23] = "fifty";
	tab[24] = "sixty";
	tab[25] = "seventy";
	tab[26] = "eighty";
	tab[27] = "ninety";
	tab[28] = "hundred";
	tab[29] = "thousand";
	tab[30] = "million";
	tab[31] = "trillion";
	tab[32] = "quadrillion";
	nb = ft_atoi(ch);
	number = ft_getnumber(nb);
	corps(nb, tab, number);
}
