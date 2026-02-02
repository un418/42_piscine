/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:53:45 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/02 18:04:20 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	modulo;

	division = 0;
	modulo = 0;
	if (*b != 0)
	{
		while (*b <= *a)
		{
			*a = *a - *b;
			division++;
		}
		modulo = *a;
	}
	*a = division;
	*b = modulo;
}

#include  <stdio.h>
int	main(void)
{
	int	main_a;
	int	main_b;

	main_a = 45;
	main_b = 3;
	printf("debug input: main_a=%d/main_b=%d\n", main_a, main_b);
	ft_ultimate_div_mod(&main_a, &main_b);
	printf("debug output: div=%d/%d\n", main_a, main_b);
	return (0);
}
/*
Tested:
	main_a = 4; main_b = 2; #debug:4/2=2mod0
	main_a = 65465; main_b = 78; #debug:65465/78=839mod23
	main_a = 45; main_b = 78; #debug:45/78=0mod45
	main_a = 0; main_b = 45;# #debug:0/45=0mod0

	main_a = 45; main_b = 0; #debug:45/0=4096mod0
*/
