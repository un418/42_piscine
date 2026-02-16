/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:41:04 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/16 22:01:17 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
strlcpy() and strlcat() take the full size of the buffer (not just the length)
and guarantee to NUL-terminate the result 
in the case of strlcat(),as long as there is at least one byte free in dst).
Note that a byte for the NUL should be included in size..

- for strlcpy() src must be NUL-terminated and 
- for strlcat() both src and dst must be NUL-terminated.

The strlcat() function appends the NUL-terminated string src to the end of dst.
It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result

Return Values
strlcat() functions return the total length of the string they tried to create.
For strlcat() that means the initial length of dst plus the length of src.
While this may seem somewhat confusing,
it was done to make truncation detection simple.

*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = ft_strlen(dest);
	if (size != 0)
	{
		while (src[i] && i < (size - 1 - len))
		{
			dest[len + i] = src[i];
			i++;
		}
		dest[len + i] = '\0';
	}
	return (ft_strlen(dest) + ft_strlen(src));
}

/* 
#include <stdio.h>
int main(void)
{
	char str1[50] = "Segmentation";
	char str2[] = "_Fault";
	char str3[10] = "Stack";
	char *str4 = "";
	printf("%s",str4);
	char str5[] = "+Overflow";
	// char *str5 = "";
	// char str6[] = "";

	// strlen vs sizeof
	printf("debug_sizeof:%lu\n",sizeof(str1));
	printf("debug_strlen:%d\n",ft_strlen(str1));
	printf("debug_sizeof:%lu\n",sizeof(str2));
	printf("debug_strlen:%d\n",ft_strlen(str2));
	// debug_sizeof:50
	// debug_strlen:12
	// debug_sizeof:7  ?? When usig index begin 0 but sizeof at 1
	// debug_strlen:6 

	// if (ft_strlcat(str2, str1, sizeof(str2)) >= sizeof(str2))
	// 	printf("BUFFER OVERFLOW -> src=str1,dst=str2 \n");
	// printf("debug_dst_str:%s\n",str2);
	// printf("debug_ret_value:%d\n",ft_strlcat(str2, str1, sizeof(str2)));
	// printf("debug_sizeof_dst:%lu\n",sizeof(str2));

	// if (ft_strlcat(str5, str1, sizeof(str5)) >= sizeof(str5))
	// 	printf("BUFFER OVERFLOW -> src=str1,dst=str5 \n");
	// printf("debug_dst_str:%s\n",str5);
	// printf("debug_ret_value:%d\n",ft_strlcat(str5, str1, sizeof(str5)));
	// printf("debug_sizeof_dst:%lu\n",sizeof(str5));

	// if (ft_strlcat(str1, str2, sizeof(str1)) >= sizeof(str1))
	// 	printf("BUFFER OVERFLOW -> src=str2,dst=str1 \n");
	// printf("debug_dst_str:%s\n",str1);
	// printf("debug_ret_value:%d\n",ft_strlcat(str1, str2, sizeof(str1)));
	// printf("debug_sizeof_dst:%lu\n",sizeof(str2));


	ft_strlcat(str1, str2, sizeof(str1));
	printf("debug_dst_str:%s\n",str1);

	printf("debug_sizeof_dst:%lu\n",sizeof(str3));
	ft_strlcat(str3, str5, sizeof(str3));
	printf("debug_sizeof_dst:%lu\n",sizeof(str3));
	printf("debug_dst_str:%s\n",str3);

	return 0;
}

 */