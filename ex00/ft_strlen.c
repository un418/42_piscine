/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:39:50 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/15 21:45:15 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	while (str[i])
	{
		str++;
	}
	return (i);
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