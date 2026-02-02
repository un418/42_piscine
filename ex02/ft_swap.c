/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:24:07 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/02 14:36:48 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/* 
#include <stdio.h>

int	main(void)
{
	int	a, b;
	int	*ptr_a,*ptr_b;

	a = 1;
	b = 999;
	ptr_a = &a;
	ptr_b = &b;
	ft_swap(ptr_a, ptr_b);
	printf("debug: a=%d\n", a);
	printf("debug: b=%d\n", b);
	return (0);
}
 */