/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42lehavre.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:33:09 by sjan              #+#    #+#             */
/*   Updated: 2024/09/29 23:45:18 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0) // Cas où la puissance est négative
      return 0;
  if (power == 0) // n'importe quel nombre à la puissance 0 est 1
      return 1;
	return (nb * ft_recursive_power(nb , power - 1));
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 1));
}
