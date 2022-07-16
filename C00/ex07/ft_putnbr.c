/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:24:36 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/15 09:30:56 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	int_to_char(int n)
{
	char	c;

	if (n < 10 && n >= 0)
	{
		c = 48 + n;
		write(1, &c, 1);
	}
}

void	ft_putnbr(int nb)
{
	int	i;
	
	if (nb < 0){
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb < 9 && nb > -1)
	{
		int_to_char(nb);
	}
	else
	{
		if (nb > 0)
		{
			i = nb % 10;
			nb = nb / 10;
			ft_putnbr(nb);
			int_to_char(i);
		}
	}
}
