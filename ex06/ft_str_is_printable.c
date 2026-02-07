/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:50:59 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/07 18:04:06 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
			return (0);
		i++;
	}
	return (1);
}

/* 
#include <stdio.h>
int	main(void)
{
	char str_main[]="aaaaaaaaaaa";
	// char str_main[]="\1\2";
	// char str_main[]="";
	printf("return:%d",ft_str_is_printable(str_main));
	printf("\ndebug:%s", str_main);
}
 */
/* 
//Understand char type casting
#include <unistd.h>
int main(void)
{
	unsigned char	c;

	c = 20;
	while ( c >=  20 && c <= 130)
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