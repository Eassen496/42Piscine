/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_dict.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tdechand <tdechand@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 12:59:32 by Tdechand          #+#    #+#             */
/*   Updated: 2022/07/30 12:59:36 by Tdechand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_dict.h"

void	ft_display_dict(t_dict *dict)
{
	int	i;

	i = 0;
	while (dict[i].str)
	{
		ft_putstr(dict[i].number);
		ft_putstr("\t\t:\t> ");
		ft_putstr(dict[i].str);
		ft_putstr("\n");
		i++;
	}
}
