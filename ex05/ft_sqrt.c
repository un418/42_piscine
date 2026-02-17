/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:34:27 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/17 22:26:45 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Create a function that returns the square root of a given number (if it exists)
or 0 if the square root is an irrational number.

irrational number:
- infinite floating number like PI or 1/3=0.33333333.....
- The square root of a negative number is not a real number

Square roots:
- A square root of a number is a value that,
when multiplied by itself ( x*x or x^2), equals the original number

Formula : n = x * x
*/


int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb < 0)
		return (0);
	while (sqrt <= nb)
	{
		if ((sqrt * sqrt) == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}

/* 
// Another way to do
int ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb < 0 )
		return (0);

	while (sqrt <= nb )
	{
		if ((nb / sqrt == sqrt) && (nb % sqrt == 0 ))
			return (sqrt);
		sqrt++;
	}
	return (0);
}
 */

/* 
#include <stdio.h>
int main(void)
{
	int i = -12;
	while (i < 100)
	{
		if (ft_sqrt(i) > 0) // Avoid to print not find sqrt
		printf("sqrt of %d = %d\n", i, ft_sqrt(i));
		i++;
	}
}
 */
