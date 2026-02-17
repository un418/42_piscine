/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:23:26 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/17 16:34:50 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
-Create a function ft_fibonacci, that returns the n-th element of the Fibonacci
sequence, with the first element at index 0.
The Fibonacci sequence will be considered to start as follows: 0, 1, 1, 2
- Overflows do not need to be handled;
	the function’s return value will be undefined in such cases.
- ft_fibonacci must be implemented recursively
- If index is less than 0, the function should return -1.


-Formula: Fn = F(n-1) + F(n-2)
-
Fibonacci number;
	an integer in the infinite sequence 1, 1, 2, 3, 5, 8, 13,
	 … of which the first two terms are 1 and 1 and 
	 each succeeding term is the sum of the two immediately preceding.

*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	
}

#include <stdio.h>
int main(void)
{
	int n;

	n = 10;
	while ( n >=0 )
	{
		printf("debug:%n",ft_fibonacci(n));
		n--;
	}
}