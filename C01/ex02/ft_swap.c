/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:18:45 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/16 07:24:54 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int	*b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}