/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:41:24 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/12 16:02:06 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
- Create a function that capitalizes the first letter of each word
and converts all other letters to lowercase.
- A word is a sequence of alphanumeric characters.
- Ex:
	-Input:  hi, how are you? 42words forty-two; fifty+and+one
	-Output: Hi, How Are You? 42words Forty-Two; Fifty+And+One
*/

#include <stdbool.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	bool	first_letter;

	i = 0;
	first_letter = true;
	while (str[i])
	{
		if (('a' <= str[i] && str[i] <= 'z')
			|| ('A' <= str[i] && str[i] <= 'Z')
			|| ('0' <= str[i] && str[i] <= '9'))
		{
			if (first_letter && ('a' <= str[i] && str[i] <= 'z'))
				str[i] = str[i] - 32;
			if (!first_letter && ('A' <= str[i] && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			first_letter = false;
		}
		else
			first_letter = true;
		i++;
	}
	return (str);
}
/* 
#include <stdio.h>
int	main(void)
{
	// char str_main[]="";
	// char str_main[100]="coucou c'est moi";
	char str_main[100]="hi, how are you? 42words forty-two; fifty+and+one";
	printf("input:%s",str_main);
	printf("\ndebug:%s",ft_strcapitalize(str_main));
	return (0);
}
 */