/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:30:07 by abosc             #+#    #+#             */
/*   Updated: 2024/08/19 14:46:07 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int i;
	int somme;

	i = 0;
	somme = 1;
	if (power < 0)
		return 0;
	if (power == 0 && nb == 0)
		return 1;
	if (power == 0)
		return 1;

	while (i < power)
	{
		somme *= nb;
		i++;
	}
	return (somme);	
}

//int main(void)
//{
//	printf("%d", ft_iterative_power(0, -5));
//	return (0);
//}
