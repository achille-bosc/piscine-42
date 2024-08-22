/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeddah <almeddah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:06:49 by almeddah          #+#    #+#             */
/*   Updated: 2024/08/18 19:20:41 by almeddah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	count_words(char *str, char sep)
{
	int	n;
	int	i;

	n = -1;
	if (*str && *str != sep)
		n++;
	while (*str)
	{
		while (*str == sep)
			str++;
		i = 0;
		while (str[i] != sep && str[i])
			i++;
		n++;
		str += i;
	}
	return (n);
}

char	**ft_split(char *str, char sep)
{
	int		i;
	int		j;
	int		nb_words;
	char	**str_sep;

	nb_words = count_words(str, sep);
	str_sep = malloc(sizeof(char *) * (nb_words + 1));
	j = 0;
	while (*str)
	{
		while (*str == sep)
			str++;
		i = 0;
		while (str[i] != sep && str[i])
			i++;
		if (*str)
		{
			str_sep[j] = malloc(sizeof(char) * (i + 1));
			str_sep[j][0] = '\0';
			ft_strncat(str_sep[j++], str, i);
		}
		str += i;
	}
	str_sep[j] = 0;
	return (str_sep);
}
