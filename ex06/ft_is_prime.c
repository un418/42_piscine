/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 19:31:02 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/17 22:21:25 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Create a function that returns 1 if the given number is a prime number
	and 0 if it is not.

Prime numbers are natural numbers that are divisible by 
	only 1 and the number itself.
In other words, prime numbers are positive integers greater than 1 
	with exactly two factors, 1 and the number itself.

So if we can modulo 0 from 2 to n-1 means its a not prime number.
*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if ( nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/* 
#include <stdio.h>
int main()
{
	int i = -5;
	while (i < 100)
	{
		if (ft_is_prime(i)) // Avoid null result
			printf("%d is a prime number\n", i);
		i++;
	}

	printf("0 is a prime?  %d \n", ft_is_prime(0));
	printf("1 is a prime?  %d \n", ft_is_prime(1));
	printf("-5 is a prime?  %d \n", ft_is_prime(-5));
	printf("-12 is a prime?  %d \n", ft_is_prime(-12));
}
 */
