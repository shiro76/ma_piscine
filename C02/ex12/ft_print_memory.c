/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 05:35:02 by sjan              #+#    #+#             */
/*   Updated: 2024/09/25 22:00:45 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{		
			ft_putchar(str[i]);
		}
		else
			ft_putchar('.');
		i++;
	}
	write(1, "\n", 1);
}

void	ft_putchar_hex(unsigned char c)
{
	char	*hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_print_hex_addr(void *addr,unsigned int size)
{
	char	*hex;
	long	address;
	char	addr_byte[16];
	int	i;

	address = (long)addr;
	hex = "0123456789abcdef";
	i = 15;
	if (size == 0)
		return ;
	while (i >= 0)
	{
		addr_byte[i] = hex[address % 16];
		address /= 16;
		i--;
	}
	write(1, addr_byte, 16);
	ft_putchar(':');
	ft_putchar(' ');
}

void	ft_content_to_hex(char *content, unsigned int size)
{
	int		char_count;
	int		i;
	char	swap;
	int		trailing_zeros;

	trailing_zeros = 0;
	swap = ' ';
	char_count = 0;
	i = 0;
	if (size == 0)
		return ;
	while (content[i] != '\0')
	{

		if (i < 16)
		{
			ft_putchar_hex(content[i]);	
			char_count++;
			if (char_count == 2)
			{
				ft_putchar(' ');
				char_count = char_count - 2;
			}
		}
		i++;
	}

	// Compléter avec des espaces pour atteindre 16 caractères
	// while (i < 16)
	// {
	// 	ft_putchar(' ');             // Ajoute deux espaces par caractère manquant
	// 	ft_putchar(' ');
	// 	if ((i % 2) == 1)
	// 		ft_putchar(' ');         // Espace tous les deux caractères
	// 	i++;
	// }
		// Compléter avec "00" suivi d'espaces pour atteindre 16 caractères
	// Remplir la fin avec "00" ou des espaces si c'est une série de "0000"
	while (i < 16)
	{
		if (trailing_zeros >= 4)  // Après avoir écrit un "0000", on remplace par des espaces
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('0');  // Complète avec "00"
			ft_putchar('0');
			trailing_zeros += 2;
		}

		if (i % 2 == 1)
			ft_putchar(' ');  // Espace tous les deux "00" ou espaces

		i++;
	}
	ft_putstr(content);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
		if (size > 0)
		{
			ft_print_hex_addr(&addr, size);
			ft_content_to_hex(addr, size);
		}
		return ((void *)addr);
}

int	main(void)
{
	int		i;
	char	*a;
	char	*c; 
	char	*b;
	char	*result;
	char	*result1;
	char	*result2;

	i = 0;
	a = "ches\n. c'est fo";
	b = "Bonjour les amin";
	c = "inferieur a ";
	result = ft_print_memory(a, 16);
	result1 = ft_print_memory(b, 16);
	result2 = ft_print_memory(c, 16);
	return (0);
}
