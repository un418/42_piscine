/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:28:50 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/17 00:34:29 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Create a function that displays the number passed as a parameter.
The function must be able to handle all possible values of the int type.
*/

#include <unistd.h>

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
		write (1, "-", 1);
		lnb = lnb * -1;
	}
	if (lnb > 9)
		ft_putnbr(lnb / 10);
	ft_nb_to_char(lnb % 10);
}

/* 
#include <stdio.h>
int main(void)
{
	// int number = 125;
	// int number = 12;
	// int number = -2147483648;
	// int number = 2147483647;
	int number = -1;
	// int number;
	// int number = -2147483649;
	// int number = -30255874238785468;

	ft_putnbr(number);
	return 0;
}
 */

/* 
Understand recursivity:

number = 100

* ft_putnbr(100) 
* ft_putnbr(10) = ft_putnbr(100 / 10)
* ft_putnbr(1) = ft_putnbr(10 / 10)

* ft_nbrtochar(1 % 10) -> Print 1
* ft_nbrtochar(10 % 10) -> Print 0
* ft_nbrtochar(100 % 10) -> Print 0

# Result in order -> 100
*/
