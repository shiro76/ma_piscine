/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42lehavre.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 04:14:14 by sjan              #+#    #+#             */
/*   Updated: 2024/09/20 04:49:46 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap_tab;

	i = 0;
	while (i > size / 2)
	{
		swap_tab = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap_tab;
		i++;
	}
}
