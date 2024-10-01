/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42lehavre.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 00:33:32 by sjan              #+#    #+#             */
/*   Updated: 2024/10/01 00:49:08 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
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

void ft_print_program_name(int argc, char **argv)
{
	if (argc > 0)
	{
		ft_putstr(argv[0]); // Affiche le nom du programme
	}
}

void	ft_print_program_name2(int i, char **name)
{
	if (i > 0)
	{
		ft_putstr(name[0]);
	}
}

int main(int i, char **name)
{
	ft_print_program_name2(i, name); // Passe argc et argv
	return 0;
}

