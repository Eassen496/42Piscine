/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tdechand <tdechand@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:18:07 by Tdechand          #+#    #+#             */
/*   Updated: 2022/07/30 17:18:10 by Tdechand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_dict.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	ft_check_file(char *input)
{
	if ((open(input, O_RDONLY)) == -1)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	return (0);
}
