/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:55:35 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/17 14:19:05 by ktaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void first_line(int col)
{
	int i;

	i = 2;
	ft_putchar('/');
	while (i < col)
	{
		ft_putchar('*');
		i++;
	}
	if ( i > 2)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void middle_line(int col)
{
	int i;

	i = 2;
	ft_putchar('*');
	while (i < col)
	{
		ft_putchar(' ');
		i++;
	}
	if (i != 2)
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void last_line(int col)
{
	int i;

	i = 2;
	ft_putchar('\\');
	while (i < col)
	{
		ft_putchar('*');
		i++;
	}
	if (i != 2)
	{
		ft_putchar('/');
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
