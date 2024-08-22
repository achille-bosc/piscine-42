/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:48:09 by abosc             #+#    #+#             */
/*   Updated: 2024/08/19 14:58:16 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return 1;
	return (nb*ft_recursive_power(nb, power-1));
}

//int main(void)
//{
//	printf("%d", ft_recursive_power(5, 5));
//	return (0);
//}
