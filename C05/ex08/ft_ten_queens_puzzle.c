/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42lehavre.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 00:07:58 by sjan              #+#    #+#             */
/*   Updated: 2024/10/01 00:18:55 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_solution(int *position)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = position[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_is_safe(int *position, int col, int row)
{
	int i;

	i = 0;
	while (i < col)
	{
		// Vérifie la même ligne ou diagonale
		if (position[i] == row || (position[i] - row) == (col - i) || (position[i] - row) == (i - col))
			return (0);
		i++;
	}
	return (1);
}

void	ft_solve(int *position, int col)
{
	int row;

	if (col == 10)
	{
		ft_print_solution(position);
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (ft_is_safe(position, col, row))
		{
			position[col] = row;
			ft_solve(position, col + 1);
		}
		row++;
	}
}

void	ft_ten_queens_puzzle(void)
{
	int position[10];

	ft_solve(position, 0);
}

int	main(void)
{
	ft_ten_queens_puzzle();
	return (0);
}

