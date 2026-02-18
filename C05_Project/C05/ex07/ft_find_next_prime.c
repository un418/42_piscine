/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 21:14:10 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/18 00:20:55 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Create a function that returns the next prime number greater than or equal to the
given number.

while nb++ -> test if prime ->  yes = return number
*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/* 
#include <stdio.h>
int main()
{
	int t;

	t = 0;
	while ( t < 100 )
	{
		printf("next_prime of %d is %d\n",t , ft_find_next_prime(t));
		t++;
	}
	// t =14;
	// while ( t < 123456789 )
	// {
	// 	printf("next_prime of %d is %d\n",t , ft_find_next_prime(t));
	// 	t = ( t + 3) * 3;
	// }
}		
 */
