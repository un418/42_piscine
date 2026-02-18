/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:32:31 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/17 00:35:52 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 0;
	nb = 0;
	while (str[i] < 33)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + (str[i] - 48);
		i++;
	}
	if ((sign % 2) != 0)
		nb = nb * -1;
	return (nb);
}

void	ft_nb_to_char(int nb)
{
	char	c;

	c = '0' + nb;
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	lnb;

	lnb = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		lnb = lnb * -1;
	}
	if (lnb > 9)
		ft_putnbr(lnb / 10);
	ft_nb_to_char(lnb % 10);
}

/* 
// Main with argv
#include <stdio.h>
int main(int argc, char *argv[])
{
	// printf("argc=%d",argc);
	if (argc != 2)
	{
		printf("Only one argument authorized");
		return (1); 
	}
	
	ft_putnbr(ft_atoi(argv[1]));
	return (0);
}

 */
// ./a.out " ---+--+---+--+30255874238785468ab567ab567"
	// -1813436484  // Going over limit on int
// ./a.out " ---+-+-2147483648"
// ./a.out "  ----2147483647" // int limit
// ./a.out "  ---2147483648" // int limit
// ./a.out "-2147" // int limit

/* 
//Test is space
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char c;

	c = 0;
	while (c < 127)
	{
		if (isspace(c))
			printf("ASCII:%d is space\n",c);
		c++;
	}
	return 0;
}

// ASCII:9 is space		// Horizontal Tab
// ASCII:10 is space	// Line Feed
// ASCII:11 is space	// Vertical Tabulation
// ASCII:12 is space	// Form Feed
// ASCII:13 is space	// Carriage Return
// ASCII:32 is space	// Space
// -> Simply use char < 33 to match space <-
 */
