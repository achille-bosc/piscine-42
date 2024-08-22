/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeddah <almeddah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:41:46 by lleborgn          #+#    #+#             */
/*   Updated: 2024/08/17 19:19:44 by almeddah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		rush01(char tab[4][4], char *arg, int i, int j);

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_arg(char *arg)
{
	int	i;

	i = 0;
	if (str_len(arg) != 31)
		return (0);
	while (arg[i])
	{
		if (i % 2 == 0)
		{
			if (!(arg[i] >= '1' && arg[i] <= '4'))
				return (0);
		}
		else
		{
			if (arg[i] != ' ')
				return (0);
		}
		i++;
	}
	return (1);
}

void	print_rush(char tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, &tab[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	tab[4][4];
	int		j;
	int		k;

	if (argc == 2 && check_arg(argv[1]))
	{
		j = 0;
		k = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 4)
				tab[j][k++] = '0';
			j++;
		}
		rush01(tab, argv[1], 0, 0);
		if (tab[0][0] != '0')
		{
			print_rush(tab);
			return (0);
		}
	}
	write(1, "Error\n", 6);
	return (0);
}
