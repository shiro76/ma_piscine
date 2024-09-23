/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:51:02 by sjan              #+#    #+#             */
/*   Updated: 2024/09/22 04:07:24 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int res;

// 	res = ft_str_is_printable("azerty");
// 	printf("%d \n", res);
// 	res = ft_str_is_printable("AZERTY");
// 	printf("%d \n", res);
// 	res = ft_str_is_printable("1246AEUFBKDyfsdfsk#@&(!)");
// 	printf("%d \n", res);
// 	res = ft_str_is_printable("é");
// 	printf("%d", res);
// }
