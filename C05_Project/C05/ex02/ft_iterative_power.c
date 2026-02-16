/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 22:59:31 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/15 23:51:51 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
- Create an iterative function that returns
	the result of raising a number to a given power.
- If the power is less than 0, the function should return 0.
- Overflows do not need to be handled.
- By definition, 0 raised to the power of 0 should return 1.
*/

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result = nb * result;
		power--;
	}
	return (result);
}

/* 
#include <stdio.h>
int	main(void)
{
	int	nb;

	nb = 0;
	while (nb <= 32)
	{
		printf("2^%d=%d\n",nb ,ft_iterative_power(2, nb));
		nb++;
	}
	printf("2^%d=%d\n",-2 ,ft_iterative_power(2, -2));
	return (0);
}
 */
