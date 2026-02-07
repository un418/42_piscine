/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:28:46 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/07 15:59:11 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') || (str[i] < 'A' || str[i] < 'Z'))
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
	// char str_main[]="aaaaaa5aaaaa";
	char str_main[]="aaaaaa-aaaaa";
	printf("return:%d",ft_str_is_alpha(str_main));
}

// If str[i] is (outstide a to z) OR (outside A to Z)
// if ((str[i] < 'a' || str[i] > 'z') || (str[i] < 'A' || str[i] < 'Z'))

 */