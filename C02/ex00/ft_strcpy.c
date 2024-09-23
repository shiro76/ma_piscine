/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42lehavre.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 05:40:07 by sjan              #+#    #+#             */
/*   Updated: 2024/09/20 20:15:21 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//int	main(void)
//{
//	char	src[] = "mon texte a copier";
//	char	dest[19];
//
//	ft_print_string("test de reproduction de  strcpy\n");
//	ft_strcpy(dest, src);
//	ft_print_string(dest);
//	return (0);
//}
