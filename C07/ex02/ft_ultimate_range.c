/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:46:13 by ale-roux          #+#    #+#             */
/*   Updated: 2022/08/01 16:48:24 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tmp;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = malloc ((max - min - 1) * sizeof (int));
		tmp = *range;
		if (*range == NULL)
		{
			return (-1);
		}
		else
		{
			i = 0;
			while (i < max - min)
				*(tmp++) = min + i++;
			return (max - min);
		}
	}
}
