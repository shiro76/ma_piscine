/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 04:41:22 by sjan              #+#    #+#             */
/*   Updated: 2024/09/30 22:06:57 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = nb;
	if (nb < 0)
		return (0);
	if (nb == n)
	{
		while (n > 0)
		{
			if ((n * n) == nb)
				return (n);
			n--;
		}
	}
	return (0);
}


#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(36));
	printf("%d\n", ft_sqrt(42));
}
