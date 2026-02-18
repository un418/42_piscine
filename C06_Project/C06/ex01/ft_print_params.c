/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 23:11:51 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/18 00:50:43 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
• Write a program that displays its given arguments.
• Each argument should be printed on a new line,
in the same order as in the command line.
• The program should display all arguments except argv[0].

• Example:
$>./a.out test1 test2 test3 | cat -e
test1$
test2$
test3$
*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i <= (argc - 1))
	{
		ft_putstr(argv[i++]);
		write(1, "\n", 1);
	}
}
