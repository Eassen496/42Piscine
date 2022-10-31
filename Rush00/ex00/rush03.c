/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:55:35 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/17 14:50:14 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void first_line(int col)
{
	int i;

	i = 2;
	ft_putchar('A');
	while (i < col)
	{
		ft_putchar('B');
		i++;
	}
	if ( i > 2)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void middle_line(int col)
{
	int i;

	i = 2;
	ft_putchar('B');
	while (i < col)
	{
		ft_putchar(' ');
		i++;
	}
	if (i != 2)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void last_line(int col)
{
	int i;

	i = 2;
	ft_putchar('A');
	while (i < col)
	{
		ft_putchar('B');
		i++;
	}
	if (i != 2)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void rush(int col, int line)
{
	int i;

	if ((col > 0) && (line > 0))
	{
		i = 2;
		first_line(col);
		while (i < line)
		{
			middle_line(col);
			i++;
		}
		if (i > 2)
		{
			last_line(col);
		}
	}
}
