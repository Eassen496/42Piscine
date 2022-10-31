/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 01:23:54 by ale-roux          #+#    #+#             */
/*   Updated: 2022/08/02 20:21:27 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	*result;
	int	val;
	int	i;

	length = max - min;
	result = malloc (length * sizeof (int));
	val = min;
	i = 0;
	if (min >= max)
		return (NULL);
	while (val < max)
	{
		result[i] = val;
		val++;
		i++;
	}
	return (result);
}
