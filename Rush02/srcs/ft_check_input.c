/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tdechand <tdechand@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:46:45 by Tdechand          #+#    #+#             */
/*   Updated: 2022/07/30 14:46:50 by Tdechand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_dict.h"
#include <limits.h>

int	isespace(char c)
{
	if (c == '\t')
		return (1);
	else if (c == '\n')
		return (1);
	else if (c == '\v')
		return (1);
	else if (c == '\f')
		return (1);
	else if (c == '\r')
		return (1);
	else if (c == ' ')
		return (1);
	else
		return (0);
}

char	*ft_send(char *str, int i)
{
	char	*ret;
	int		a;

	ret = malloc(256);
	a = 0;
	while (str[i] == '0' && !(str[i + 1] < '0' || str[i + 1] > '9'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret[a] = str[i];
		i++;
		a++;
	}
	ret[a] = 0;
	return (ret);
}

char	*clean_check(char *str, int *sign)
{
	int	i;
	int	nbr_moins;

	i = 0;
	nbr_moins = 0;
	while (isespace(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nbr_moins++;
		if (nbr_moins % 2 == 1)
			*sign = -1;
		else
			*sign = 1;
		i++;
	}
	return (ft_send(str, i));
}

int	ft_check_input(char *input)
{
	int		sign;
	char	*buff;

	sign = 1;
	buff = clean_check(input, &sign);
	free(input);
	input = ft_strdup(buff);
	free(buff);
	if (input[0] == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (ft_atol(input) > UINT_MAX)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (sign);
}
