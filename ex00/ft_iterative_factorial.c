/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 22:24:25 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/17 21:53:24 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Subject:
- Create an iterative function that returns a number.
- This number should be the result of a factorial operation
	based on the given parameter.
- If the argument is not valid, the function should return 0.
- Overflows do not need to be handled;
	the function’s return value will be undefined in such cases.
Note:
- https://en.wikipedia.org/wiki/Factorial

In mathematics, the factorial of a non-negative integer, denoted by !,
	is the product of all positive integers less than or equal to 
Ex: 5 ! = 5 × 4 ! = 5 × 4 × 3 × 2 × 1 = 120
*/

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		while (nb > 0)
		{
			fact = fact * nb;
			nb--;
		}
	}
	return (fact);
}

/* 
#include <stdio.h>
int	main(void)
{
	int	nb;

	nb = 0;
	while (nb <= 10)
	{
		printf("fact_%d=%d\n",nb ,ft_iterative_factorial(nb));
		nb++;
	}
	
	printf("fact_0=%d\n", ft_iterative_factorial(0));
	printf("fact_-3=%d\n", ft_iterative_factorial(-3));
	
	return (0);
}
 */
