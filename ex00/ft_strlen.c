/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:39:50 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/15 23:38:44 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
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
