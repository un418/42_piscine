/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:45:22 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/12 15:56:33 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Create a function that returns 1 if the given string contains only uppercase
alphabetical characters and 0 if it contains any other character.
It should return 1 if str is empty.
*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/* 
#include <stdio.h>
int	main(void)
{
	char str_main[]="AAAAAAAAAA";
	// char str_main[]="AAAAAaaAAAA";
	// char str_main[]="aaaaaa-5aaaaa";
	// char str_main[]="";
	printf("return:%d",ft_str_is_uppercase(str_main));
}
 */
// Before Yoda
// if (str[i] < 'A' || str[i] > 'Z')
// if item is inferior to 'A' OR superior to 'Z'
// means not between A and Z