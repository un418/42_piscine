/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:53:45 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/02 18:41:43 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ToDo - Can improve condition and var management
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;

	division = 0;
	if (*b != 0)
	{
		while (*b <= *a)
		{
			*a = *a - *b;
			division++;
		}
	}
	else
	{
		*a = 0;
		*b = *a;
	}
	*b = *a;
	*a = division;
}

/*
#include  <stdio.h>
int	main(void)
{
	int	main_a;
	int	main_b;

	main_a = 3;
	main_b = 0;
	printf("debug input: main_a=%d & main_b=%d -- ", main_a, main_b);
	ft_ultimate_div_mod(&main_a, &main_b);
	printf("debug output: div=%dmod%d\n", main_a, main_b);
	return (0);
}
*/
/*
Tested:
debug input: main_a=45 & main_b=3 -- debug output: div=15mod0
debug input: main_a=458 & main_b=65484 -- debug output: div=0mod458
debug input: main_a=0 & main_b=65484 -- debug output: div=0mod0 -> To recheck
debug input: main_a=3 & main_b=0 -- debug output: div=0mod0
*/
