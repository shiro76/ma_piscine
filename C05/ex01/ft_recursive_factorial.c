/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42lehavre.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:53:49 by sjan              #+#    #+#             */
/*   Updated: 2024/09/29 22:55:28 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
    // Cas d'erreur : si le nombre est négatif
	if (nb < 0)
		return (0);

    //  si nb vaut 0 ou 1, on renvoie 1 (car 0! = 1 et 1! = 1)
	if (nb == 0 || nb == 1)
		return (1);

    // Appel récursif : on multiplie nb par la factorielle de (nb - 1)
	return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(5));
}
