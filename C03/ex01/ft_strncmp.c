/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 00:05:47 by sjan              #+#    #+#             */
/*   Updated: 2024/09/26 03:27:04 by sjan             ###   ########.fr       */
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
		ft_putchar(str[i]);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_put_endline(void)
{
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = nb % 10 + '0';
	ft_putchar(c);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0' || s2[i] == '\0')
			break;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*c;
	char	*c1;
	int		res;

	// Test 1
	c = "Hello";
	c1 = "Hell";
	res = ft_strncmp(c, c1, 5);
	ft_putnbr(res); // Devrait afficher une valeur positive
	ft_put_endline();

	// Test 2
	c = "Hello";
	c1 = "Hello";
	res = ft_strncmp(c, c1, 5);
	ft_putnbr(res); // Devrait afficher 0
	ft_put_endline();

	// Test 3
	c = "Hello";
	c1 = "Helloo";
	res = ft_strncmp(c, c1, 5);
	ft_putnbr(res); // Devrait afficher 0
	ft_put_endline();

	// Test 4
	c = "Hello";
	c1 = "Hella";
	res = ft_strncmp(c, c1, 5);
	ft_putnbr(res); // Devrait afficher une valeur positive
	ft_put_endline();

	// Test 5
	c = "abc";
	c1 = "abcd";
	res = ft_strncmp(c, c1, 4);
	ft_putnbr(res); // Devrait afficher 0
	ft_put_endline();

	return (0);
}


// int	main(void)
// {
// 	char	*c;
// 	char	*c1;
// 	int		res;

// 	c = "Hello";
// 	c1 = "Hell";
// 	res = ft_strncmp(c, c1, 5);
// 	ft_putnbr(res);
// }
