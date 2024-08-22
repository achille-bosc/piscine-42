/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeddah <almeddah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:17:53 by almeddah          #+#    #+#             */
/*   Updated: 2024/08/18 19:11:09 by almeddah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_line_left(int **tab, int l_num, int arg, int size)
{
	int	somme;
	int	i;
	int	j;

	somme = 1;
	i = size - 1;
	while (i >= 1)
	{
		j = i - 1;
		while (j >= 0)
		{
			if (tab[l_num][i] <= tab[l_num][j])
				break ;
			if (j == 0)
				somme++;
			j--;
		}
		i--;
	}
	if (somme == arg)
		return (1);
	return (0);
}

int	check_line_right(int **tab, int l_num, int arg, int size)
{
	int	somme;
	int	i;
	int	j;

	somme = 1;
	i = 0;
	while (i <= size - 2)
	{
		j = i + 1;
		while (j <= size - 1)
		{
			if (tab[l_num][i] <= tab[l_num][j])
				break ;
			if (j == size - 1)
				somme++;
			j++;
		}
		i++;
	}
	if (somme == arg)
		return (1);
	return (0);
}

int	check_col_up(int **tab, int c_num, int arg, int size)
{
	int	somme;
	int	i;
	int	j;

	somme = 1;
	i = size - 1;
	while (i >= 1)
	{
		j = i - 1;
		while (j >= 0)
		{
			if (tab[i][c_num] <= tab[j][c_num])
				break ;
			if (j == 0)
				somme++;
			j--;
		}
		i--;
	}
	if (somme == arg)
		return (1);
	return (0);
}

int	check_col_down(int **tab, int c_num, int arg, int size)
{
	int	somme;
	int	i;
	int	j;

	somme = 1;
	i = 0;
	while (i <= size - 2)
	{
		j = i + 1;
		while (j <= size - 1)
		{
			if (tab[i][c_num] <= tab[j][c_num])
				break ;
			if (j == size - 1)
				somme++;
			j++;
		}
		i++;
	}
	if (somme == arg)
		return (1);
	return (0);
}
