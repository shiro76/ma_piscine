/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42lehavre.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:35:16 by sjan              #+#    #+#             */
/*   Updated: 2024/09/19 03:46:03 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	comb[10];
	int		i;

	i = 0;
	while (i < n)
	{
		comb[i] = '0' + i;
		i++;
	}
	while (1)
	{
		write(1, comb, n);
		if (comb[0] == '9' - n + 1)
		{
			write(1, "\n", 1);
			return ;
		}
		write(1, ", ", 2);
		i = n - 1;
		while (i >= 0 && comb[i] == '9' - (n - 1 - i))
			i--;
		comb[i]++;
		while (++i < n)
			comb[i] = comb[i - 1] + 1;
	}
}
