/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:39:50 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/10 20:45:47 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter++;
	}
	return (counter);
}

/* 
#include <stdio.h>
int main(void)
{
	char str[45]="tesasdt";

	printf("debug:%d",ft_strlen(str));
	return 0;
}
 */