/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeddah <almeddah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:02:59 by almeddah          #+#    #+#             */
/*   Updated: 2024/08/18 18:52:49 by almeddah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
char	**ft_split(char *str, char sep);
int		rush01(int ***tab, int *arg_tab_int, int i, int j);
int		check_line_left(int **tab, int l_num, int arg, int arg_nb);
int		check_line_right(int **tab, int l_num, int arg, int arg_nb);
int		check_col_up(int **tab, int c_num, int arg, int arg_nb);
int		check_col_down(int **tab, int c_num, int arg, int arg_nb);
void	free_all(int **tab, int *arg_tab_int, char **arg_tab);

#endif
