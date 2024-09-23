/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:29:13 by sjan              #+#    #+#             */
/*   Updated: 2024/09/22 04:07:49 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	res;

// 	res = ft_str_is_lowercase("test");
// 	printf("%d \n", res);
// 	res = ft_str_is_lowercase("TEST1");
// 	printf("%d \n", res);
// 	res = ft_str_is_lowercase("1234566");
// 	printf("%d", res);
// }
