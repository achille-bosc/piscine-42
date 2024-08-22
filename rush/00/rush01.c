/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:42:59 by abosc             #+#    #+#             */
/*   Updated: 2024/08/11 11:17:50 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line_width(char *start, char *mid, char *end, int width)
{
	int	character_counter;

	character_counter = 1;
	while (character_counter <= width)
	{
		if (character_counter == 1)
			ft_putchar(*start);
		if (character_counter == width && character_counter > 1)
			ft_putchar(*end);
		else if (character_counter > 1)
			ft_putchar(*mid);
		character_counter++;
	}
}

void	print_line(int line_width, int lines_quantity)
{
	int	line_counter;

	line_counter = 1;
	if (lines_quantity > 0 && line_width > 0)
	{
		while (line_counter <= lines_quantity)
		{
			if (line_counter == 1)
				print_line_width("/", "*", "\\", line_width);
			else if (line_counter == lines_quantity)
				print_line_width("\\", "*", "/", line_width);
			else
				print_line_width("*", "", "*", line_width);
			ft_putchar('\n');
			line_counter++;
		}
	}
	return ;
}

void	rush(int x, int y)
{
	print_line(x, y);
}
