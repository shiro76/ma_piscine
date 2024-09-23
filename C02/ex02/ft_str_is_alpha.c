/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 21:58:37 by sjan              #+#    #+#             */
/*   Updated: 2024/09/22 04:04:31 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int res;

// 	res = ft_str_is_alpha("\0");
// 	printf("%d \n", res);
// 	res = ft_str_is_alpha("alphabet");
// 	printf("%d \n",res);
// 	res = ft_str_is_alpha("");
// 	printf("%d \n", res);
// 	res = ft_str_is_alpha("12345667");
// 	printf("%d \n", res);
// 	res = ft_str_is_alpha("TEST");
// 	printf("%d", res);
// }
