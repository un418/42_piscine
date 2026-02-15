/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:32:31 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/13 13:58:12 by adaferna         ###   ########.fr       */
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
	while (str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign++;
		i++;
	}
	if ((sign % 2) != 0)
		write (1, "-", 1);
	while ('0' <= str[i] && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + (str[i] - 48);
		i++;
	}
	return (nb);
}

/* void	ft_nb_to_char(unsigned int nb)
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
} */

/* 
#include <stdio.h>
int main(void)
{
	char str_1[50] = " ---+--+1234ab567";

	ft_putnbr(ft_atoi(str_1));
	
	return 0;
} */


// Main with argv
#include <stdio.h>
int main(int argc, char *argv[])
{
	// printf("argc=%d",argc);
	if (argc != 2)
		printf("Only one argument authorized");
	
	//ft_putnbr(ft_atoi(argv[1]));

	printf("%d", ft_atoi(argv[1]));
	return 0;
}
