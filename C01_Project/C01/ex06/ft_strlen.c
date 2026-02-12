/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:14:44 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/09 15:12:42 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}
/* 
#include <stdio.h>
int	main(void)
{
	int	strlen;
	
	// char str[] = "Lisboa sahgckctrfxjtrzyhtrxhjnrsyxjxmxf2026\n";
	char str[] = "";
	// char str[] = "12345";
	strlen = ft_strlen(str);
	printf("debug: strlen=%d \n", strlen);
	return (0);
}
 */