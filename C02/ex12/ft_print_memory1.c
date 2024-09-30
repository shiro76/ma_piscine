/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42lehavre.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:33:01 by sjan              #+#    #+#             */
/*   Updated: 2024/09/25 01:13:19 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

void	ft_putchar_hex(unsigned char c)
{
	char *hex;

	hex = "0123456789abcdef";
	
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

//ft_putstr_hex(char *str, unsigned int size)
//{
//	
//}

void	*ft_print_memory1(void *addr, unsigned int size)
{	
	char					*hex;
	long					address;
	char					octet[16];
	int						i;
	int						c_char;
	unsigned char	*str;
	int						count;

	count = 0;
	c_char = 0;
	str = (unsigned char *)addr;
	//partie 1 adresse memoire ;
	address = (long)addr;
	i = 15;
	hex = "0123456789abcdef";
	while (i >= 0 && size > 0)
	{
		octet[i] = hex[address % 16];
		address /= 16;
		i--;
	}
	write(1, octet, 16);
	write(1 , ": ", 2);
	while (str[c_char] != '\0' && size > 0)
	{
		ft_putchar_hex(str[c_char]);
		c_char++;
		count++;
		if (count == 2)
		{
			ft_putchar(' ');
			count = 0;
		}
	}
	return ((void *)addr);
}

int	main(void)
{
	char	*addr;
	char	c;
	char *add;
	int	i;
	add = "Bonjour les amin";
	c = 'a';
	//ft_putchar_hex(c);
	//ft_print_memory1(&add, 16);
	addr = ft_print_memory1(add, 16);
	//write(1, addr, 16);
	write(1, "\n", 1);
	//ft_putstr(add);
}
