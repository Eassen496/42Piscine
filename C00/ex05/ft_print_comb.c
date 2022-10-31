/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:14:17 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/20 17:02:28 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	int_to_char(int i, int j, int k)
{
	char	c;
	char	d;
	char	f;

	c = i + 48;
	d = j + 48;
	f = k + 48;
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &f, 1);
	if (100 * i + 10 * j + k < 789)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				int_to_char(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
