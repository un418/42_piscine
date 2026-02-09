/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:56:10 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/09 20:33:41 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
DESCRIPTION
       The  strcmp() function compares the two strings s1 and s2.  The locale is not taken into account (for a
       locale-aware comparison, see strcoll(3)).  The comparison is done using unsigned characters.

       strcmp() returns an integer indicating the result of the comparison, as follows:

       • 0, if the s1 and s2 are equal;
       • a negative value if s1 is less than s2;
       • a positive value if s1 is greater than s2.

       The strncmp() function is similar, except it compares only the first (at most) n bytes of s1 and s2.

*/

int	ft_strcmp(char *s1, char *s2)
{
	int i_s1,i_s2,s1_sum,s2_sum,diff;

	i_s1 = 0;
	i_s2 = 0;
	s1_sum = 0;
	s2_sum = 0;
	while (s1[i_s1])
	{
		s1_sum = s1_sum + s1[i_s1];
		i_s1++;
	}
	while (s2[i_s2])
	{
		s2_sum = s2_sum + s2[i_s1];
		i_s2++;
	}
	diff = s1_sum - s2_sum;
	return(diff);
}

#include <stdio.h>
int main(void)
{
	char str1[]="H";
	char str2[]="H";

	// ft_strcmp(str1,str2);
	printf("debug:%d",ft_strcmp(str1,str2));
	return 0;
}