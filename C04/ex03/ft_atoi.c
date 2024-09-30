/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 02:14:31 by sjan              #+#    #+#             */
/*   Updated: 2024/09/28 05:21:17 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v')
		return (1);
	return (0);
}


int	ft_atoi(char *str)
{
	int	i;
	int	min;
	int nb;

	i = 0;
	min = 0;
	nb = 0;
	while (ft_isspace(str[i]))
		i++;

	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			min++;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}

	if (min % 2 == 1)
		nb = -nb;
	return (nb);
}

int main(void)
{
	int	res;

	res = ft_atoi("---+--+1234ab567");
	printf("%d", res);
}	
