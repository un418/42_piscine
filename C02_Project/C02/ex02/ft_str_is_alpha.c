/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:28:46 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/11 21:43:17 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Create a function that returns 1 if the given string 
contains only alphabetical characters
and 0 if it contains any other character.
It should return 1 if str is empty.
*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(('a' <= str[i] && str[i] <= 'z')
				|| ('A' <= str[i] && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/* 
#include <stdio.h>
int	main(void)
{
	// char str_main[]="aaaaaaaaaaa";
	// char str_main[]="aaaaaa5aaaaa";
	// char str_main[]="aaaaaa-aaaaa";
	char str_main[]="";
	printf("return:%d",ft_str_is_alpha(str_main));
}

// First Condition
// If str[i] is (outstide a to z) OR (outside A to Z)
// if ((str[i] < 'a' || str[i] > 'z') || (str[i] < 'A' || str[i] < 'Z'))
 */