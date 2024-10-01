/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjan <sjan@student.42lehavre.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 03:43:42 by sjan              #+#    #+#             */
/*   Updated: 2024/10/01 06:27:29 by sjan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*char	*ft_get_params(int argc, char **argv)
{
	int	i;

	i = 2;
	while (i < argc)
	{
		if (argc > 1)
		{
			return (argv[i]);
			i++;
		}
		else
			ft_putstr("pas d'argument");
	}
	 return (0);
}*/

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while(j < argc -i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				tmp = argv[j + 1];
				argv[j + 1] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	int	i;
	ft_sort_params(argc,argv);
	i = 1;
	while(i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	//ft_putstr(ft_get_params(argc, argv));
	return (0);
}
