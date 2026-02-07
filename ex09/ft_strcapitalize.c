/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:41:24 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/07 20:33:09 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	wi;

	i = 0;
	wi = 0;
	while (str[i])
	{
		if (('a' <= str[i] && str[i] <= 'z')
			|| ('A' <= str[i] && str[i] <= 'Z')
			|| ('0' <= str[i] && str[i] <= '9'))
		{
			if (wi == 0 && ('a' <= str[i] && str[i] <= 'z'))
				str[i] = str[i] - 32;
			if (wi > 0 && ('A' <= str[i] && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			wi++;
		}
		else
			wi = 0;
		i++;
	}
	return (str);
}
/* 
#include <stdio.h>
int	main(void)
{
	char str_main[]="";
	// char str_main[100]="coucou c'est moi";
	// char str_main[100]="hi, how are you? 42words forty-two; fifty+and+one";
	printf("input:%s",str_main);
	printf("\ndebug:%s",ft_strcapitalize(str_main));
	return (0);
}
 */