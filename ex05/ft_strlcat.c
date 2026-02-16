/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:41:04 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/16 17:54:37 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
The strlcpy() and strlcat() functions copy and concatenate strings respectively. 
They are designed to be safer, more consistent,
and less error prone replacements for strncpy(3) and strncat(3).
Unlike those functions, strlcpy() and strlcat() take the full size of the buffer (not just the length)
and guarantee to NUL-terminate the result (as long as size is larger than 0 or, in the case of strlcat(),
as long as there is at least one byte free in dst).
Note that a byte for the NUL should be included in size.
Also note that strlcpy() and strlcat() only operate on true ''C'' strings.
This means that for strlcpy() src must be NUL-terminated and for strlcat() both src and dst must be NUL-terminated.

The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.

The strlcat() function appends the NUL-terminated string src to the end of dst.
It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.

Return Values
The strlcpy() and strlcat() functions return the total length of the string they tried to create. For strlcpy() that means the length of src. For strlcat() that means the initial length of dst plus the length of src.
While this may seem somewhat confusing, it was done to make truncation detection simple.

Note, however, that if strlcat() traverses size characters without finding a NUL,
the length of the string is considered to be size and the destination string will not be NUL-terminated
(since there was no space for the NUL).
This keeps strlcat() from running off the end of a string.
In practice this should not happen (as it means that either size is incorrect or that dst is not a proper ''C'' string).
The check exists to prevent potential security problems in incorrect code. 
*/


int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	i++;
	return (i);
	}

#include <stdio.h>
int main(void)
{
	char str1[50] = "Segmentation";
	char str2[] = "_Fault";
	char str3[50] = "Stack";
	char str4[] = "+Overflow";
	char *str5 = "";
	char str6[] = "";

	printf("debug_sizeof:%lu\n",sizeof(str1));
	printf("debug_strlen:%d\n",ft_strlen(str1));

	// printf("debug:%s\n",ft_strlcat(str1,str2));
	// printf("debug:%s\n",ft_strlcat(str3,str4));
	// printf("debug:%s\n",ft_strlcat(str5,str5));
	// printf("debug_RO_str:%s\n",ft_strcat(str5,str1)); // Segfault hehe

	return 0;
}
