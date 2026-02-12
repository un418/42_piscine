/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:37:44 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/12 14:42:34 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Create a function that returns 1 if the given string contains only lowercase
alphabetical characters and 0 if it contains any other character.
It should return 1 if str is empty.
*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('a' <= str[i] && str[i] <= 'z'))
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
	// char str_main[]="aaaaaaAaaaaa";
	char str_main[]="aaaaaa-5aaaaa";
	// char str_main[]="";
	printf("return:%d",ft_str_is_lowercase(str_main));
}
 */

// Before Yoda
// if (str[i] < 'a' || str[i] > 'z')
// if item is inferior to 'a' or superior to 'z'
// means no between 'a' and 'z'