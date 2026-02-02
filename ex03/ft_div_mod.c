/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:56:51 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/02 17:11:47 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	division;
	int	modulo;

	div = 0;
	while (b <= a && b != 0)
	{
		a = a - b;
		division++;
	}
	modulo = a;
	div = &division;
	mod = &modulo;
}

int	main(void)
{
	int	main_a;
	int	main_b;
	int	div;
	int	mod;

	main_a = 4;
	main_b = 2;
	ft_div_mod(main_a, main_b, &div, &mod);
	printf("debug:%d/%d=%dmod%d\n", main_a, main_b, div, mod);
	return (0);
}
/* 
Tested:
	main_a = 4;
	main_b = 2;
*/