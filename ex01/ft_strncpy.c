/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:20:15 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/07 15:18:12 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char	*strncpy(char *dest, const char *src, int n)
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
	// unsigned int size = 3;
	// char str_src[10]="Test42";
	// char str_dst[10]="aaaaaaaaaa";

	unsigned int size = 3;
	char str_src[10]="aaaaaaaaaa";
	char str_dst[10]="Test42";

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