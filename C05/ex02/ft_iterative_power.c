/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42lehavre.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:56:50 by sjan              #+#    #+#             */
/*   Updated: 2024/09/29 23:27:57 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	power_count;
	int	res;

	res = nb;
	power_count = power;
	if (nb == 0 && power == 0 || power == 0)
		return (1);
	if (power < 0)
		return(0);
	if (power == 1)
		return (nb);
	while (power_count >= 2 )
	{
		res = res * nb;
		power_count--;
	}
	return (res);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(10, -2));
}
