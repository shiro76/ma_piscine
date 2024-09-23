/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:41:27 by sjan              #+#    #+#             */
/*   Updated: 2024/09/22 04:07:38 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	res;

// 	res = ft_str_is_uppercase("azerty");
// 	printf("%d \n", res);
// 	res = ft_str_is_uppercase("AZERTY");
// 	printf("%d \n", res);
// 	res = ft_str_is_uppercase("123456");
// 	printf("%d \n", res);
// }
