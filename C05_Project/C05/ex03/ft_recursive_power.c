/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 23:54:08 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/16 00:44:33 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
- Create a recursive function that returns 
	the result of raising a number to a given power.
- If the power is less than 0, the function should return 0.
- Overflows do not need to be handled;
	the function’s return value will be undefined in such cases.
-  By definition, 0 raised to the power of 0 should return 1.
*/

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	if (power > 0)
	{
		result = nb * ft_recursive_power(nb, power -1);
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
		printf("2^%d=%d\n",nb ,ft_recursive_power(2, nb));
		nb++;
	}
	printf("2^%d=%d\n",-2 ,ft_recursive_power(2, -2));
	return (0);
}

// https://pythontutor.com/c.html
#include <stdio.h>
int	main(void)
{
	int power = 8;
	printf("2^%d=%d\n", power, ft_recursive_power(2, power));
	return (0);
}
 */
