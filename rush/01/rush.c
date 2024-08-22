/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeddah <almeddah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:13:03 by lleborgn          #+#    #+#             */
/*   Updated: 2024/08/17 19:09:28 by almeddah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_line_left(char tab[4][4], int l_num, int arg);
int	check_line_right(char tab[4][4], int l_num, int arg);
int	check_col_up(char tab[4][4], int c_num, int arg);
int	check_col_down(char tab[4][4], int c_num, int arg);

int	check_dup_line(char tab[4][4], int i)
{
	int	k;
	int	l;

	k = 0;
	while (k <= 2)
	{
		l = k + 1;
		while (l <= 3)
		{
			if (tab[i][k] == tab[i][l] && tab[i][k] != '0')
				return (0);
			l++;
		}
		k++;
	}
	return (1);
}

int	check_dup_col(char tab[4][4], int j)
{
	int	k;
	int	l;

	k = 0;
	while (k <= 2)
	{
		l = k + 1;
		while (l <= 3)
		{
			if (tab[k][j] == tab[l][j] && tab[k][j] != '0')
				return (0);
			l++;
		}
		k++;
	}
	return (1);
}

int	check_condition(char tab[4][4], char *arg, int i, int j)
{
	if (!(check_dup_line(tab, i) && check_dup_col(tab, j)))
		return (0);
	if (j == 3)
	{
		if (!check_line_left(tab, i, arg[16 + i * 2] - '0'))
			return (0);
		if (!check_line_right(tab, i, arg[24 + i * 2] - '0'))
			return (0);
	}
	if (i == 3)
	{
		if (!check_col_up(tab, j, arg[0 + j * 2] - '0'))
			return (0);
		if (!check_col_down(tab, j, arg[8 + j * 2] - '0'))
			return (0);
	}
	return (1);
}

int	rush01(char tab[4][4], char *arg, int i, int j)
{
	while (tab[i][j] < '4')
	{
		tab[i][j] += 1;
		if (check_condition(tab, arg, i, j))
		{
			if (j < 3)
			{
				if (rush01(tab, arg, i, j + 1))
					return (1);
			}
			else if (i < 3)
			{
				if (rush01(tab, arg, i + 1, 0))
					return (1);
			}
			else
				return (1);
		}
	}
	tab[i][j] = '0';
	return (0);
}
