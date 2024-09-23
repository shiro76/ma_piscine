/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42lehavre.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:22:13 by sjan              #+#    #+#             */
/*   Updated: 2024/09/22 16:22:20 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_address(void *addr)
{
	char	*hex_digits = "0123456789abcdef";
	long	address = (long)addr;
	char	address_str[16];
	int		i;

	// Remplir la chaîne avec la représentation hexadécimale de l'adresse
	i = 15;
	while (i >= 0)
	{
		address_str[i] = hex_digits[address % 16];
		address /= 16;
		i--;
	}

	// Afficher l'adresse (16 caractères)
	write(1, address_str, 16);
	write(1, ":", 1);
}

int	main(void)
{
	int	var = 42;

	ft_print_address(&var);
	return (0);
}

