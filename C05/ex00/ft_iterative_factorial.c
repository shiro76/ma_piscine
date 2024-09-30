/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:37:47 by sjan              #+#    #+#             */
/*   Updated: 2024/09/29 22:50:06 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int f;
	int	res;

	res = nb;
	f = res - 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (f > 0)
	{
		res = res * f;
		f--;
	}
	return (res);
}

int	main(void)
{
	printf("resultat: %d\n", ft_iterative_factorial(5));
}
