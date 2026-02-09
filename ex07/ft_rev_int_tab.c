/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:50:26 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/09 15:04:22 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buff;

	i = 0;
	size--;
	while (i < size && size > 0)
	{
		buff = tab[i];
		tab[i] = tab[size];
		tab[size] = buff;
		i++;
		size--;
	}
}

/* 
#include <stdio.h>
void	ft_print_int_tab(int *tab)
{
	printf("Debug:");
	while (*tab)
	{
		printf("%d,", *tab);
		tab++;
	}
	printf("\n");
}

int	main(void)
{
	// int array[]={1,2,3,4,5};
	 int array[]={};
	// int array[]={1};

	ft_print_int_tab(array);
	ft_rev_int_tab(array, 0);
	ft_print_int_tab(array);

	return (0);
}
 */