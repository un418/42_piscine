/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:56:51 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/02 16:11:01 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int division;
	int modulo;
	
	div = 0;
	while ( b >= a )
	{
		a = a - b;
		division++;
	}
	modulo = a;

}
int	main(void)
{
	int main_a;
	int main_b;
	int div;
	int mod;

	ft_div_mod(main_a, main_b, &div, &mod);
	return(0);
}