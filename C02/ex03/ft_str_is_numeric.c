/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 01:21:25 by sjan              #+#    #+#             */
/*   Updated: 2024/09/22 04:05:36 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	res;
// 	res = ft_str_is_numeric("12345678");
// 	printf("%d \n", res);
// 	res = ft_str_is_numeric("test");
// 	printf("%d \n",res);
// 	res = ft_str_is_numeric("#@&&é");
// 	printf("%d \n", res);
// 	res = ft_str_is_numeric("\0");
// 	printf("%d", res);
// return (0);
// }
