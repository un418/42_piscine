/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:50:29 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/11 20:06:01 by adaferna         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* 
#include <unistd.h>
void	ft_putstr(char *str)
{
	int count = 0;
	while (*str != '\0')
	// while (count <= 26) 
	// buffer overrun :
	//		able to see the the previous data of dst at the end of the string
	{
		write(1, str, 1);
		str++;
		count++;
	}
}

int	main(void)
{
	// char *src = "Lisboa 2026|";
	// char dst[26] = "abcdefghijklmnopqrstvwxyz";

	char *src = "Lisboa";
	char  dest[]= "abcdefghijklmnopqrstvwxyz";

	ft_strcpy(dst, src);
	//ft_putstr(dst);
	ft_putstr(ft_strcpy(dst, src));
	
	return (0);
}

// Tested:
// 	- Overflow : Able to copy src[20] to dest [5] // 
// 	- src[5] to dest[10] - Able to access what in end of dest
 */