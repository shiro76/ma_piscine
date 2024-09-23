/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42lehavre.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 05:35:02 by sjan              #+#    #+#             */
/*   Updated: 2024/09/23 02:31:50 by sjan             ###   ########.fr       */
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

void	ft_print_hex_addr(void *addr)
{
	char	*hex;
	long	address;
	char	addr_byte[16];
	int	i;

	address = (long)addr;
	hex = "0123456789abcdef";
	i = 15;
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

void	ft_content_to_hex(char *content)
{
	int		char_count;
	int		i;
	char	len[16];

	char_count = 0;
	i = 0;
	while (i < 16)
	{
		//ft_putchar(content[i]);
		ft_putchar_hex(content[i]);	
		char_count++;
		if (char_count == 2)
		{
			ft_putchar(' ');
			char_count = char_count - 2;
		}
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		char_count;
	int		i;
	char	len[16];
	unsigned char address;

	char_count = 0;
	i = 0;
	while (i < 16)
	{
		address += addr[i];
		//ft_putchar(content[i]);
		ft_putchar_hex(address);
		char_count++;
		if (char_count == 2)
		{
			ft_putchar(' ');
			char_count = char_count - 2;
		}
		i++;
	}
	ft_print_hex_addr(&addr);
	ft_content_to_hex(addr);
	ft_putstr(addr);

//	ft_print_hex_addr(&a);
//	ft_content_to_hex(a);
//	ft_putstr(a);
}

int	main(void)
{
	int	i;
	char	*a;
	char	*c; 
	
	i = 0;
	a = "ches\n. c'est fo";
	c = "Bonjour les amin";

	ft_print_memory(a, 16);
	ft_print_memory(c, 16);
	return (0);
}
