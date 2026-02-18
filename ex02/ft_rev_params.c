/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 00:32:32 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/18 00:44:29 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Same exercise but print argument in reverse order.

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	while (argc-- > 1)
	{
		ft_putstr(argv[argc]);
		write(1, "\n", 1);
		printf("argc=%d\n", argc);
	}
}

/* 
#include <stdio.h>
int	main(int argc, char **argv)
{
	while (argc-- > 1)
	{
		ft_putstr(argv[argc]);
		write(1, "\n", 1);
		printf("argc=%d\n", argc);
	}
}
 */
