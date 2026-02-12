/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:06:03 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/12 15:17:19 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Create a function that converts every letter to uppercase
It should return str.
*/
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/* 
#include <stdio.h>
int	main(void)
{
	// char str_main[]="aIGUfojpdASDERbUGI@#$%^&*(ohpguoryojpuogy8hopo";
	// char str_main[]="abchdRTYH";
	char str_main[]="";
	printf("input:%s",str_main);
	printf("\ndebug:%s",ft_strupcase(str_main));
	return (0);
}
 */
// Before Yoda
// if (str[i] >= 'a' && str[i] <= 'z')
// if item is superior = to 'a' AND inferior = to 'z'
// Means between 'a' ans 'z'