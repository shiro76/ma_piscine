/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42lehavre.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 20:44:51 by sjan              #+#    #+#             */
/*   Updated: 2024/09/20 21:57:28 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

//int	main(void)
//{
//	unsigned int		i;
//	char						src[] = "Salut je suis un texte a copier";
//	char						dest[50];
//	
//	i = 50;
//	ft_strncpy(dest, src, i);
//	printf("%s ", dest);
//	return (0);
//}
