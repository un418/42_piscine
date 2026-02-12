/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:58:13 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/10 15:33:24 by adaferna         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

/* #include <stdio.h>
int main(void)
{
	// char src[]="";
	// char dst[]="\n";
	//

	char src[10]="";
	char dst[10]="";
	//

	// char src[50]="Segmentation";
	// char dst[50]="_Fault";
	// 0

	// char src[50]="Stack";
	// char dst[50]="+Overflow";
	// 0 

	printf("debug:%s",ft_strcat(dst,src));
	return 0;
}
 */