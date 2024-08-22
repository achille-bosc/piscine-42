/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:33:54 by abosc             #+#    #+#             */
/*   Updated: 2024/08/21 16:28:02 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (src[size])
	{
		size++;
	}

	char *copy;

	copy = (char *) malloc(sizeof(char) * size);
	
	while(src[i])
	{
		copy[i] = src[i];
		i++;
	}

	return (copy);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	printf("'%s'\n", ft_strdup(""));
	printf("'%s'\n", ft_strdup("coucou"));
	return (0);
}
*/
