/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci_no_recursive.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42lehavre.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 00:22:25 by sjan              #+#    #+#             */
/*   Updated: 2024/09/30 04:35:40 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci_no_recursive(int index)
{
	int	previous; // a
	int	next; // b
	int	i;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	previous = 0;
	next = 1;
	i = 2;
	while (i <= index)
	{
		next = previous + next;
		previous = next - previous;
		i++;
	}
	return (next);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci_no_recursive(5));
	printf("%d\n", ft_fibonacci_no_recursive(2));
	printf("%d\n", ft_fibonacci_no_recursive(10));
}
