/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:56:10 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/16 14:07:26 by adaferna         ###   ########.fr       */
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

MORE DETAILLED INFO
- https://www.w3schools.com/c/ref_string_strcmp.php
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

/* 
#include <stdio.h>
int main(void)
{
	
	char str1[]="Hello";
	char str2[]="Hello0";
	char str3[]="";
	
	
	printf("debug_equal:%d\n",ft_strcmp(str1,str1));
	printf("debug_s1<s2:%d\n",ft_strcmp(str1,str2));
	printf("debug_s1>s2:%d\n",ft_strcmp(str1,str3));
	printf("debug_null:%d\n",ft_strcmp(str3,str3));
	printf("debug_null_rev:%d\n",ft_strcmp(str2,str3));
	
	return 0;
}
 */

/* 
// Other possible implementation but more complex for my brain
// If not (...&& s1[i] != '\0') -> SegFault
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
 */
