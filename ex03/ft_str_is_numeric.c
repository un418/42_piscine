/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:00:57 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/11 21:40:05 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Create a function that returns 1 if the given string contains 
only digits and 0 if it contains any other character.
It should return 1 if str is empty.
*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('0' <= str[i] && str[i] <= '9'))
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
	// char str_main[]="0123456AAA";
	char str_main[]="0123456$-_AAA";
    // char str_main[]="";
	printf("return:%d",ft_str_is_numeric(str_main));
}

// Before Yoda
// If str[i] is outstide a to z
// if (str[i] < '0' || str[i] > '9')
 */