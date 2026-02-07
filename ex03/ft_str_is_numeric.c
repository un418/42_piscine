/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:00:57 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/07 16:08:04 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/* 
#include <stdio.h>
int	main(void)
{
	// char str_main[]="0123456789";
	char str_main[]="0123456AAA";
	// char str_main[]="0123456$-_AAA";
    // char str_main[]="";
	printf("return:%d",ft_str_is_numeric(str_main));
}

// If str[i] is outstide a to z
// if (str[i] < '0' || str[i] > '9')
 */