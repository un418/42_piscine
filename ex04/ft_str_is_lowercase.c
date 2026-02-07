/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:37:44 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/07 16:43:01 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/* 
#include <stdio.h>
int	main(void)
{
	// char str_main[]="aaaaaaaaaaa";
	// char str_main[]="aaaaaaAaaaaa";
	// char str_main[]="aaaaaa-5aaaaa";
	char str_main[]="";
	printf("return:%d",ft_str_is_lowercase(str_main));
}
 */