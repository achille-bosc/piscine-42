/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:54:18 by abosc             #+#    #+#             */
/*   Updated: 2024/08/10 14:09:34 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	char	j;
	int		i;

	i = 0;
	while (i < size / 2)
	{
		j = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = j;
		i++;
	}
}
