/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanneau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:47:42 by afanneau          #+#    #+#             */
/*   Updated: 2016/11/03 19:46:17 by afanneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(char **argv)
{
	int		i;

	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		j;
	char	*temp;

	j = 1;
	while (j + 1 <= argc - 1)
	{
		if (ft_strcmp(argv[j], argv[j + 1]) > 0)
		{
			temp = argv[j + 1];
			argv[j + 1] = argv[j];
			argv[j] = temp;
			j = 1;
		}
		else
			j++;
	}
	ft_print_params(argv);
	return (0);
}
