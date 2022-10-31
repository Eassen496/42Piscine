/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tdechand <tdechand@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 20:01:59 by Tdechand          #+#    #+#             */
/*   Updated: 2022/07/30 20:02:02 by Tdechand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_dict.h"

char	*make_str(char c)
{
	char	*buff;

	buff = malloc(2);
	buff[0] = c;
	buff[1] = 0;
	return (buff);
}

char	*make2_str(char c, char d)
{
	char	*buff;

	buff = malloc(3);
	buff[0] = c;
	buff[1] = d;
	buff[2] = 0;
	return (buff);
}
