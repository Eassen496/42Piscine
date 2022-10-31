/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 01:36:20 by ale-roux          #+#    #+#             */
/*   Updated: 2022/08/01 00:19:15 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		length;

	copy = NULL;
	length = ft_strlen(src);
	*copy = *(char *) malloc (length * sizeof (char));
	ft_strcpy(copy, src);
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*l_struct;
	int			nb_struct;

	l_struct = NULL;
	nb_struct = 0;
	l_struct = malloc (sizeof (t_stock_str *) * (ac + 1));
	if (l_struct)
	{
		while (nb_struct < ac)
		{
			l_struct[nb_struct].size = ft_strlen (av[nb_struct]);
			l_struct[nb_struct].str = ft_strdup (av[nb_struct]);
			l_struct[nb_struct].copy = ft_strdup (av[nb_struct]);
			nb_struct++;
		}
		l_struct[nb_struct].str = 0;
	}
	return (l_struct);
}
