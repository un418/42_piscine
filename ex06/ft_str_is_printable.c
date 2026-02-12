/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:50:59 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/12 15:09:09 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Create a function that returns 1 if the given string contains only
printable characters and 0 if it contains any other character.
It should return 1 if str is empty.
*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(32 <= str[i] && str[i] <= 127))
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
	// char str_main[]="/\101/\\2";
	// '\' Needs to be escaped to be printed : '\\'
	// '\101' say print the carac that got the octal value 101
	// char str_main[]="\036";
	char str_main[]="";
	printf("return:%d",ft_str_is_printable(str_main));
	printf("\ndebug:%s", str_main);
}
 */
// Before Yoda
// if (str[i] < 32 || str[i] > 127)
// if item is inferior to 32 OR superior to 127
// Means not between 32 and 127

/* --------------------------------------------
// Playground - Understand char type casting
#include <unistd.h>
int main(void)
{
	unsigned char	c;

	c = 20;
	// c = 200;
	while ( c >=  20 && c <= 150)
	{
		write(1, &c, 1);
		c++;
	}
	return (0);
}

// char is just a int limited to 1Byte (-127 to +127)
// max value 127
// unsigned char 200 , print nothing with write
// - https://www.geeksforgeeks.org/c/octal-numbers-c/
*/