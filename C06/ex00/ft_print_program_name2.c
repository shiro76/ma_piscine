/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42lehavre.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 01:02:30 by sjan              #+#    #+#             */
/*   Updated: 2024/10/01 01:13:17 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_print_program_name(int i, char **name)
{
	if (i > 0)
		ft_putstr(name[0]);

}

int	main(int argc, char **argv)
{
	ft_print_program_name(argc, argv);
	return (0);
}
