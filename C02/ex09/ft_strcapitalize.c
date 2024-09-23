/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:33:03 by sjan              #+#    #+#             */
/*   Updated: 2024/09/22 04:30:57 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_new_word;

	i = 0;
	is_new_word = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && is_new_word == 0)
			str[i] = str[i] + 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && is_new_word == 1)
			str[i] = str[i] - 32;
		if (str[i] >= 'a' && str[i] <= 'z')
			is_new_word = 0;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			is_new_word = 0;
		else if (str[i] >= '0' && str[i] <= '9')
			is_new_word = 0;
		else
			is_new_word = 1;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+";
// 	printf("Avant: %s \n", str);
// 	ft_strcapitalize(str);
// 	printf("Apres: %s \n", str);
// 	return (0);
// }
