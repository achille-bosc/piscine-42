/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:05:44 by abosc             #+#    #+#             */
/*   Updated: 2024/08/19 14:20:55 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i;
	int somme;

	i = 1;
	somme = 1;

	while (i < nb)
	{
		i++;
		somme *= i;
	}
	return somme;
}

// int main(void)
// {	
//	printf("%d", ft_iterative_factorial(4));
//
//	return (0);
// }
