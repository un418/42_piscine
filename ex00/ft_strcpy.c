/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:50:29 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/07 15:24:15 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	// while (*str != '\0')
	while (count <= 16) // able to see the "aaa" at the end of the string
	{
		write(1, str, 1);
		str++;
		count++;
	}
}

int	main(void)
{
	char *src = "Lisboa 2026\n";
	char dst[20] = "aaaaaaaaaaaaaaaa";

	ft_strcpy(dst, src);
	//ft_putstr(dst);
	ft_putstr(ft_strcpy(dst, src));
	
	return (0);
}

// Tested:
// 	- Overflow : Able to copy src[20] to dest [5] // 
// 	- src[5] to dest[10] - Able to access what in end of dest
*/
