/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:56:45 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/10 14:42:53 by adaferna         ###   ########.fr       */
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

/* 
NOTE
Always be carefull with index
- always start at 0
- never should be negative -> seg fault
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	diff = 0;
	if (n != 0)
	{
		while (s1[i] && i <= n)
		{
			diff = diff + s1[i];
			i++;
		}
		i = 0;
		while (s2[i] && i <= n)
		{
			diff = diff - s2[i];
			i++;
		}
	}
	return (diff);
}
/* 
#include <stdio.h>
int main(void)
{
	// https://www.ascii-code.com/

	char str1[]="Hello";
	char str2[]="Hello";
	unsigned int n = 5;
	// 0

	// char str1[]="Hello0";
	// char str2[]="Hello";
	// unsigned int n = 4;
	// 0

	// char str1[]="Hello";
	// char str2[]="Hello0";
	// unsigned int n = 5;
	// -48

	// char str1[]="";
	// char str2[]="";
	// unsigned int n = 3;
	// 0

	// char str1[]="H";
	// char str2[]="";
	// unsigned int n = 0;
	// 0

	// char str1[]="";
	// char str2[]="q";
	// unsigned int n = 1;
	// -113

	printf("debug:%d",ft_strncmp(str1,str2,n));
	return 0;
}
 */