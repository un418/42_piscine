/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:56:10 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/16 14:36:58 by adaferna         ###   ########.fr       */
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
- https://www.w3schools.com/c/ref_string_strncmp.php
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i <= n && n != 0)
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
	
	
	printf("debug_equal:%d\n",ft_strncmp(str1,str1,4));
	printf("debug_equal_under:%d\n",ft_strncmp(str1,str1,2));
	printf("debug_equal_over:%d\n",ft_strncmp(str1,str1,6));

	printf("debug_s1<s2:%d\n",ft_strncmp(str1,str2,5));
	printf("debug_s1<s2_under:%d\n",ft_strncmp(str1,str2,3));
	printf("debug_s1<s2_over:%d\n",ft_strncmp(str1,str2,6));


	printf("debug_s1>s2_over:%d\n",ft_strncmp(str1,str3,4));
	printf("debug_s1>s2_null:%d\n",ft_strncmp(str1,str3,0));

	printf("debug_null_over:%d\n",ft_strncmp(str3,str3,4));
	printf("debug_null_rev:%d\n",ft_strncmp(str2,str3,0));
	
	return 0;
}
 */
