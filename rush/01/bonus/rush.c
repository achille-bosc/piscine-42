/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeddah <almeddah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:13:03 by lleborgn          #+#    #+#             */
/*   Updated: 2024/08/18 19:10:34 by almeddah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_dup_line(int **tab, int i, int size)
{
	int	k;
	int	l;

	k = 0;
	while (k <= size - 2)
	{
		l = k + 1;
		while (l <= size - 1)
		{
			if (tab[i][k] == tab[i][l] && tab[i][k] != 0)
				return (0);
			l++;
		}
		k++;
	}
	return (1);
}

int	check_dup_col(int **tab, int j, int size)
{
	int	k;
	int	l;

	k = 0;
	while (k <= size - 2)
	{
		l = k + 1;
		while (l <= size - 1)
		{
			if (tab[k][j] == tab[l][j] && tab[k][j] != 0)
				return (0);
			l++;
		}
		k++;
	}
	return (1);
}

int	check_condition(int **tab, int *arg_tab_int, int i, int j)
{
	int	size;

	size = arg_tab_int[0];
	if (!(check_dup_line(tab, i, size) && check_dup_col(tab, j, size)))
		return (0);
	if (j == size - 1)
	{
		if (!check_line_left(tab, i, arg_tab_int[size * 2 + i + 1], size))
			return (0);
		if (!check_line_right(tab, i, arg_tab_int[size * 3 + i + 1], size))
			return (0);
	}
	if (i == size - 1)
	{
		if (!check_col_up(tab, j, arg_tab_int[0 + j + 1], size))
			return (0);
		if (!check_col_down(tab, j, arg_tab_int[size + j + 1], size))
			return (0);
	}
	return (1);
}

int	rush01(int ***tab, int *arg_tab_int, int i, int j)
{
	int	size;

	size = arg_tab_int[0];
	while ((*tab)[i][j] < size)
	{
		(*tab)[i][j] += 1;
		if (check_condition(*tab, arg_tab_int, i, j))
		{
			if (j < size - 1)
			{
				if (rush01(tab, arg_tab_int, i, j + 1))
					return (1);
			}
			else if (i < size - 1)
			{
				if (rush01(tab, arg_tab_int, i + 1, 0))
					return (1);
			}
			else
				return (1);
		}
	}
	(*tab)[i][j] = 0;
	return (0);
}
