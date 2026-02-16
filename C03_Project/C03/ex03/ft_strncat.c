/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:58:13 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/16 15:52:48 by adaferna         ###   ########.fr       */
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
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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
	char str1[50] = "Segmentation";
	char str2[] = "_Fault";
	char str3[50] = "Stack";
	char str4[] = "+Overflow";
	char *str5 = "";
	// char str6[] = "";

	printf("debug:%s\n",ft_strncat(str1,str2,4));
	printf("debug_under:%s\n",ft_strncat(str3,str4,5));
	printf("debug_over_null:%s\n",ft_strncat(str5,str5,3));
	// printf("debug_over_src:%s\n",ft_strncat(str1,str2,10));
		// if (nb > ft_strlen(src)) == Segfault
	// printf("debug_RO_str:%s\n",ft_strncat(str5,str1));
		// Write on RO string == Segfault 

	return 0;
}
 */