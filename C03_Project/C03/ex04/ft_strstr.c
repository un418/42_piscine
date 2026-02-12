/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 19:08:57 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/12 19:55:11 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
DESCRIPTION
The strstr() function finds the first occurrence 
of the substring needle in the string haystack.
The terminating null bytes ('\0') are not compared.
RETURN VALUE
These functions return a pointer to the beginning of the located substring,
or NULL if the substring is not found.
 */

#include <stdlib.h>

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	count;
	int	len_str;
	int	len_to_find;

	i = 0;
	count = 0;
	len_str = ft_strlen(str);
	len_to_find = ft_strlen(to_find);
	while (str[i] && (len_str >= len_to_find))
	{
		if (str[i] == to_find[count])
			count++;
		else
			count = 0;
		if (len_to_find == count)
			return (&str[i - len_to_find + 1]);
		i++;
	}
	return (NULL);
}

/* 
// Why + 1 ??
// &str[i - len_to_find + 1]
// len_to_find = 4
//|t|e|s|t|
//|0|1|2|3| -> 3 - 4 = -1 but we want to get at adress 0
// So the good pattern is len + 1

#include <stdio.h>
int main(void)
{
	// char to_find[]="test";
	// char str[]="123test";
	// printf("debug_target:%p\n",&str[3]); 

	char to_find[]="4";
	char str[]="123test";

	// char to_find[]="";
	// char str[]="";

	printf("debug_output:%p\n",ft_strstr(str,to_find));

	return 0;
}
 */