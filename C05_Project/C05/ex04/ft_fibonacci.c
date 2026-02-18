/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:23:26 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/17 18:27:41 by adaferna         ###   ########.fr       */
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
	int	fibo;

	fibo = index;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (1 < index)
	{
		fibo = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (fibo);
}

/* 
#include <stdio.h>
int main(void)
{
	printf("debug:%d\n",ft_fibonacci(5));
}
 */

/* 
#include <stdio.h>
int main(void)
{
	int n;

	n = 0 ;
	while (n <= 10)
	{
		printf("index:%d - value:%d\n",n,ft_fibonacci(n));
		n++;
	}
}
 */

/* 
Index	Value
0		0
1		1
2		1
3		2
4		3
5		5
6		8
7		13
8		21
9		34
10		55
*/