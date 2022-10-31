/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdechand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:32:29 by tdechand          #+#    #+#             */
/*   Updated: 2022/07/20 10:57:17 by tdechand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	size;
	int				*pt_tab_int;
	unsigned int	i;

	if (min >= max)
		return (0);
	size = max - min;
	pt_tab_int = malloc(size * 4);
	i = 0;
	while (i < size)
	{
		pt_tab_int[i] = min + i;
		i++;
	}
	return (pt_tab_int);
}
