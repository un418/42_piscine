/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 00:52:04 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/19 21:55:01 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a program that displays its own name, followed by a new line.

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

// /!\ Mandatory to use argc for the compiler
int	main(int argc, char **argv)
{
	ft_putstr(argv[argc - argc]);
	write(1, "\n", 1);
}
