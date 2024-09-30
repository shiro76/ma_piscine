/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 23:10:45 by sjan              #+#    #+#             */
/*   Updated: 2024/09/29 02:12:10 by sjan             ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	base_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || ft_iswhitespace(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_print_reverse(char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
}

int	ft_putnbr_base_verif(char *base)
{
	if (ft_strlen(base) <= 1 || ft_strlen(base) == 0)
	{
		ft_putstr("empty base or base 1");
		return (1);
	}
	if (base_is_valid(base) == 0)
	{
		ft_putstr("2 same char or sign + or -");
		return (1);
	}
	return (0);
}

void	ft_putnbr_base1(int nbr, char *base)
{
	int	i;
	int	nb;

	nb = nbr;
	i = 0;
	char result[50];
	if (ft_putnbr_base_verif(base) == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		while (nb > 0)
		{
			int	nbr2;
			nbr2 = nb % ft_strlen(base);
			result[i] = base[nbr2];
			nb /= ft_strlen(base);
			i++;
		}
		result[i] = '\0';
		ft_print_reverse(result);
	}
}

int	main(void)
{
	ft_putnbr_base1(110, "poneyvif");
}
