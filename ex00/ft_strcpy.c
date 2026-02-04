/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:50:29 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/04 21:10:24 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return dest;
}

#include <unistd.h>
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char src[30] = "Lisboa 2026\n";
	char dst[8] = "11111111";
	char segf[10] = "12";

	ft_strcpy(dst, src);
	ft_putstr(dst);
	ft_putstr(segf);
	
	return (0);
}
