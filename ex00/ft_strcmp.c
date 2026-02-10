/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:56:10 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/10 13:46:22 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
DESCRIPTION
strcmp() returns an integer indicating the result of the comparison, as follows
       • 0, if the s1 and s2 are equal;
       • a negative value if s1 is less than s2;
       • a positive value if s1 is greater than s2.
The strncmp() function is similar,
except it compares only the first (at most) n bytes of s1 and s2.
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int diff;

	i = 0;
	diff = 0;
	while (s1[i])
	{
		diff = diff + s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		diff = diff - s2[i];
		i++;
	}
	return (diff);
}

#include <stdio.h>
int main(void)
{
	// char str1[]="Hello";
	// char str2[]="Hello";
	// 0

	// char str1[]="Hello0";
	// char str2[]="Hello";
	// 48

	// char str1[]="Hello";
	// char str2[]="Hello0";
	// -48

	// char str1[]="";
	// char str2[]="";
	// 0

	// char str1[]="H";
	// char str2[]="";
	// 72

	char str1[]="";
	char str2[]="~";
	// -126

	printf("debug:%d",ft_strcmp(str1,str2));
	return 0;
}
