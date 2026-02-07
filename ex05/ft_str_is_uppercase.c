/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:45:22 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/07 16:47:20 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/* 
#include <stdio.h>
int	main(void)
{
	// char str_main[]="AAAAAAAAAA";
	// char str_main[]="AAAAAaaAAAA";
	// char str_main[]="aaaaaa-5aaaaa";
	char str_main[]="";
	printf("return:%d",ft_str_is_uppercase(str_main));
}
 */