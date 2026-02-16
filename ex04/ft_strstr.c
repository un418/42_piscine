/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 19:08:57 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/16 17:39:05 by adaferna         ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	count;
	int	len_to_find;

	i = 0;
	count = 0;
	len_to_find = ft_strlen(to_find);
	while (str[i] && to_find[count])
	{
		if (str[i] == to_find[count])
			count++;
		else
			count = 0;
		i++;
		if (len_to_find == count)
			return (&str[i] - len_to_find);
	}
	return (0);
}

//--------  Obsolete see old commit --------
// Why + 1 ??
// &str[i - len_to_find + 1]
// len_to_find = 4
//|t|e|s|t|
//|0|1|2|3| -> 3 - 4 = -1 but we want to get at adress 0
// So the good pattern is len + 1
// ---------------------
// Found the solution:
//  - it depends if you check `count = len(search)` before or after i++;

/* 
// ----- trying with while loop from advice of peer  ---------
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	count;
	int	i_search;

	i = 0;
	count = 0;
	while (str[i])
	{
		i_search = i;
		while (to_find[count] && str[i_search] == to_find[count])
		{
			count++;
			i_search++;
			if (to_find[count] == '\0')
				return (&str[i]);
		}
		count = 0;
		i++;
	}
	return (0);
}
 */

/* 
#include <stdio.h>
int main(void)
{
	char to_find1[]="test";
	char str1[]="123test123";
	printf("debug_target:%p\n",&str1[3]);
	printf("debug_output:%p\n",ft_strstr(str1,to_find1));

	char to_find2[]="4";
	char str2[]="123test";
	printf("debug_target:%p\n",NULL);
	printf("debug_output:%p\n",ft_strstr(str2,to_find2));


	char to_find3[]="test";
	char str3[]="123test";
	printf("debug_target:%p\n",&str3[3]);
	printf("debug_output:%p\n",ft_strstr(str3,to_find3));

	char to_find4[]="";
	char str4[]="123test";
	printf("debug_target:%p\n",NULL);
	printf("debug_output:%p\n",ft_strstr(str4,to_find4));

	char to_find5[]="A";
	char str5[]="";
	printf("debug_target:%p\n",NULL);
	printf("debug_output:%p\n",ft_strstr(str5,to_find5));

	char to_find6[]="test";
	char str6[]="test123";
	printf("debug_target:%p\n",&str6[0]);
	printf("debug_output:%p\n",ft_strstr(str6,to_find6));

	return 0;
}
 */
