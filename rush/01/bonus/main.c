/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeddah <almeddah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:41:46 by lleborgn          #+#    #+#             */
/*   Updated: 2024/08/18 19:32:38 by almeddah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	print_rush(int **tab, int arg_nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < arg_nb / 4)
	{
		j = 0;
		while (j < arg_nb / 4)
		{
			ft_putnbr(tab[i][j]);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	check_arg(char *arg, char ***arg_tab)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (!((arg[i] >= '0' && arg[i] <= '9') || arg[i] == ' '))
			return (0);
		i++;
	}
	i = 0;
	*arg_tab = ft_split(arg, ' ');
	while ((*arg_tab)[i])
		i++;
	if (i % 4 != 0)
		return (0);
	return (i);
}

void	create_tab(int ***tab, int arg_nb)
{
	int	i;
	int	y;

	i = 0;
	*tab = malloc(sizeof(int *) * (arg_nb / 4));
	while (i < arg_nb / 4)
	{
		(*tab)[i] = malloc(sizeof(int) * (arg_nb / 4));
		y = 0;
		while (y < arg_nb / 4)
		{
			(*tab)[i][y] = 0;
			y++;
		}
		i++;
	}
}

int	convert_tab(int **arg_tab_int, char **arg_tab, int arg_nb)
{
	int	i;

	i = 1;
	*arg_tab_int = malloc(sizeof(int) * (arg_nb + 1));
	(*arg_tab_int)[0] = arg_nb / 4;
	while (i - 1 < arg_nb)
	{
		(*arg_tab_int)[i] = ft_atoi(arg_tab[i - 1]);
		if ((*arg_tab_int)[i] > arg_nb / 4 || (*arg_tab_int)[i] < 1)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	**arg_tab;
	int		**tab;
	int		*arg_tab_int;
	int		arg_nb;

	if (argc == 2)
	{
		arg_nb = check_arg(argv[1], &arg_tab);
		if (arg_nb && convert_tab(&arg_tab_int, arg_tab, arg_nb))
		{
			create_tab(&tab, arg_nb);
			rush01(&tab, arg_tab_int, 0, 0);
			if (tab[0][0] != 0)
			{
				print_rush(tab, arg_nb);
				free_all(tab, arg_tab_int, arg_tab);
				return (0);
			}
		}
		free_all(0, 0, arg_tab);
	}
	write(1, "Error\n", 6);
	return (0);
}
