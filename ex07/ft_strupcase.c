/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:06:03 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/07 18:34:30 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/* 
#include <stdio.h>
int	main(void)
{
	char str_main[]="aIGUfojpdbUGI@#$%^&*(ohpguoryojpuogy8hopo";
	// char str_main[]="abchdRTYH";
	printf("input:%s",str_main);
	printf("\ndebug:%s",ft_strupcase(str_main));
	return (0);
}
 */