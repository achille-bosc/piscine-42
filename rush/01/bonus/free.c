/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeddah <almeddah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:41:31 by almeddah          #+#    #+#             */
/*   Updated: 2024/08/18 19:02:39 by almeddah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	free_tab_int(int **tab, int *arg_tab_int)
{
	int	i;

	i = 0;
	while (i < arg_tab_int[0])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	free_tab_char(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

void	free_all(int **tab, int *arg_tab_int, char **arg_tab)
{
	if (tab)
	{
		free_tab_int(tab, arg_tab_int);
		free(arg_tab_int);
	}
	free_tab_char(arg_tab);
}
