/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:58:13 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/10 19:05:59 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The  strcat() function appends the src string to the dest string,
	overwriting the terminating null byte ('\0') at the end of dest,
	and then adds a terminating null byte.
	The strings	may not overlap,
	and the dest string must have enough space for the result.
	If dest is not large enough, program behavior is unpredictable;
	buffer overruns are a favorite avenue for attacking secure programs.
*/

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter++;
	}
	return (counter);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

/* 
#include <stdio.h>
int main(void)
{
	// unsigned int size = 0;
	// char src[]="";
	// char dst[]="\n";


	// unsigned int size = 10;
	// char src[10]="";
	// char dst[10]="";


	// unsigned int size = 3;
	// char src[50]="Segmentation";
	// char dst[50]="_Fault";


	unsigned int size = 3;
	char src[50]="Stack";
	char dst[50]="+Overflow";


	printf("debug:%s",ft_strncat(dst,src,size));
	return 0;
}
 */