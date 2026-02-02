/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:44:52 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/02 19:46:34 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char test_char;
	test_char = *str;
	while (test_char != '\0')
	{
		write(1, str, 1);
		test_char = *str;
		str++;
	}
}

int	main(void)
{
	char str[] = "Lisboa 2026/n";
	ft_putstr(str);
	return (0);
}
