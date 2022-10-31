/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:09:55 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/28 19:10:10 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_force_sqrt(int nb, int i)
{
	if (i * i == nb)
		return (i);
	else if (i * i > nb)
		return (0);
	else if (i == 262046)
		return (0);
	return (ft_force_sqrt(nb, i + 1));
}

int	ft_sqrt(int nb)
{
	return (ft_force_sqrt(nb, 1));
}
