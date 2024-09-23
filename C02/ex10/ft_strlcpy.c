/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 02:41:20 by sjan              #+#    #+#             */
/*   Updated: 2024/09/22 04:03:07 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	dest[30];
// 	char	src[] = "test de la chaine a copier";
// 	unsigned int result;
// 	result = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("chaine copier: %s \n", dest);
// 	printf("longueur de la chaine: %u", result);
// 	return (0);
// }
