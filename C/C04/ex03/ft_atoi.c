/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:54:54 by abosc             #+#    #+#             */
/*   Updated: 2024/08/21 17:04:46 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	total;
	int	is_neg;

	i = 0;
	total = 0;
	is_neg = 1;
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total *= 10;
		total += (str[i] - '0');
		i++;
	}
	return (total*is_neg);
}


int	main(void)
{
	printf("%d", ft_atoi("                           -----+-+----425454646546456654645665464abc"));
	return (0);
}
