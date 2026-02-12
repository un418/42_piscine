/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:20:15 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/11 20:37:39 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
DESCRIPTION

The  strcpy() function  copies the string pointed to by src,
including the terminating null byte ('\0'),to the buffer pointed to by dest.
The strings may not overlap, and the destination string dest must be large 
enough to  receive  the copy.  Beware of buffer overruns!  (See BUGS.)

The  strncpy() function is similar,
except that at most n bytes of src are copied.
Warning: If there is no null byte among the first n bytes of src,
the string placed in dest will not be null-terminated.
 */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/* 
#include <stdio.h>
int	main(void)
{
	unsigned int size = 3;
	char str_src[10]="Test42";
	char str_dst[10]="aaaaaaaaaa";

	// unsigned int size = 3;
	// char str_src[10]="aaaaaaaaaa";
	// char str_dst[10]="Test42";

	// unsigned int size = 0;
	// char str_src[0]="T";
	// char str_dst[0];

	// unsigned int size = 0;
	// char str_src[0]="";
	// char str_dst[0];

	ft_strncpy(str_dst, str_src, size);
	printf("input:%s  - size:%d  - output:%s",str_src ,size , str_dst);

	return (0);
}
 */