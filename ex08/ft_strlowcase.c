/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:36:29 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/12 15:23:00 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Create a function that converts every letter to lowercase.
It should return str
*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/* 
#include <stdio.h>
int	main(void)
{
	// char str_main[]="aIGUfojpdbUGI@#$%^&*(ohpguorQWERTyojpuogy8hopo";
	// char str_main[]="abchdRTYH";
	char str_main[]="";
	printf("input:%s",str_main);
	printf("\ndebug:%s",ft_strlowcase(str_main));
	return (0);
}
 */
// Before Yoda
// if (str[i] >= 'A' && str[i] <= 'Z')
// if item is superior = to A AND inferior = to 'Z'
// Means between 'A' AND 'Z'