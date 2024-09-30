/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:30:04 by sjan              #+#    #+#             */
/*   Updated: 2024/09/30 23:46:22 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//nombre premier divisible seulement par 1 ou par lui meme 	
int	ft_is_prime(int nb)
{
	int n;

	n = nb - 1;
	if (nb < 2)
		return (0);
	while (n > 1)
	{
		if (nb % n == 0)
			return (0);
		n--;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(10));
}
