/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:28:36 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/14 21:54:07 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	int_to_char(int a)
{
	char	c;

	c = a + 48;
	write(1, &c, 1);
}

void	ft_print(int a, int b, int c)
{
	int_to_char(a);
	int_to_char(b);
	int_to_char(c);
	if (a == 7 && b == 8 && c == 9)
	{
		ft_putchar('\n');
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c < 10)
			{
				ft_print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
