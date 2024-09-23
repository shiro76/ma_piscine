/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_to_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42lehavre.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:04:48 by sjan              #+#    #+#             */
/*   Updated: 2024/09/22 20:47:21 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex_to_string(char *str)
{
	char	*hex;
	int		i;
	int		val;
	char	c;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0' && str[i + 1] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			val = (str[i] - '0') * 16;
		else if (str[i] >= 'a' && str[i] <= 'f')
			val = (str[i] - 'a' + 10) * 16;

		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			val += (str[i + 1] - '0');
		else if (str[i + 1] >= 'a' && str[i] <= 'f')
			val += (str[i + 1] - 'a' + 10);

		c = (char)val;
		ft_putchar(c);
		i += 2;
	}
}

int	main(void)
{
	char *hex_string;

	hex_string = "63686573090a0963072065737420666f";
	hex_to_string(hex_string);
}
