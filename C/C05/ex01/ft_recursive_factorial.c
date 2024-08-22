/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:22:10 by abosc             #+#    #+#             */
/*   Updated: 2024/08/19 14:29:40 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0)
	if (nb == 1)
		return (0);
	return nb*ft_recursive_factorial(nb-1);
}

//int main(void)
//{
//	printf("%d", ft_recursive_factorial(4));
//	return (0);
//}
