/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:55:35 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/16 10:33:49 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void first_line(int col)
{
	int i;

	i = 1;
	if (i == 1)
	{
		ft_putchar('/');
		i++;
	}
	while (i != col)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void middle_line(int col)
{
	int i;

	i = 1;
	if (i == 1)
	{
		ft_putchar('*');
		i++;
	}
	while (i != col)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('*');
	ft_putchar('\n');
}

void last_line(int col)
{
	int i;

	i = 1;
	if (i == 1)
	{
		ft_putchar('\\');
		i++;
	}
	while (i != col)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('/');
	ft_putchar('\n');
}


void rush(int col, int line)
{
	int i;

	i = 1;
	if (i == 1)
	{
		first_line(col);
		i++;
	}
	while (i != line)
	{
		middle_line(col);
		i++;
	}
	last_line(col);
}
