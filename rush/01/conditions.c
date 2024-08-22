/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeddah <almeddah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:17:53 by almeddah          #+#    #+#             */
/*   Updated: 2024/08/18 15:57:00 by almeddah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_line_left(char tab[4][4], int l_num, int arg)
{
	int	somme;
	int	i;
	int	j;

	somme = 1;
	i = 3;
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

int	check_line_right(char tab[4][4], int l_num, int arg)
{
	int	somme;
	int	i;
	int	j;

	somme = 1;
	i = 0;
	while (i <= 2)
	{
		j = i + 1;
		while (j <= 3)
		{
			if (tab[l_num][i] <= tab[l_num][j])
				break ;
			if (j == 3)
				somme++;
			j++;
		}
		i++;
	}
	if (somme == arg)
		return (1);
	return (0);
}

int	check_col_up(char tab[4][4], int c_num, int arg)
{
	int	somme;
	int	i;
	int	j;

	somme = 1;
	i = 3;
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

int	check_col_down(char tab[4][4], int c_num, int arg)
{
	int	somme;
	int	i;
	int	j;

	somme = 1;
	i = 0;
	while (i <= 2)
	{
		j = i + 1;
		while (j <= 3)
		{
			if (tab[i][c_num] <= tab[j][c_num])
				break ;
			if (j == 3)
				somme++;
			j++;
		}
		i++;
	}
	if (somme == arg)
		return (1);
	return (0);
}
