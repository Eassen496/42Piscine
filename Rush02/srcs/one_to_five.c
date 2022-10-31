/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_to_five.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tdechand <tdechand@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:45:24 by Tdechand          #+#    #+#             */
/*   Updated: 2022/07/30 19:45:27 by Tdechand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_dict.h"

char	*dict_find_d(char *tofind, t_dict *dict);
char	*dict_find(char *tofind, t_dict *dict);

void	one(t_dict *dict, char *str)
{
	int	len;

	len = ft_strlen(str);
	ft_putstr(dict_find(make_str(str[0]), dict));
}

void	two(t_dict *dict, char *str)
{
	int	len;

	len = ft_strlen(str);
	if (str[0] == '1' )
		ft_putstr(dict_find(make2_str(str[0], str[1]), dict));
	else
	{
		if (str[0] != '0')
			ft_putstr(dict_find(make2_str(str[0], '0'), dict));
		if (str[1] != '0' && str[0] != '0')
			write(1, "-", 1);
		if (!(str[1] == '0'))
			one(dict, str + 1);
	}
}

void	three(t_dict *dict, char *str)
{
	int	len;

	len = ft_strlen(str);
	if (str[0] != '0' )
	{
		ft_putstr_space(dict_find(make_str(str[0]), dict));
		if (!(str[1] == '0' && str[2] == '0'))
			ft_putstr_space(dict_find_d("100", dict));
		else
			ft_putstr(dict_find_d("100", dict));
		if (!(str[1] == '0' && str[2] == '0'))
			write(1, "and ", 4);
	}
	two(dict, str + 1);
}

void	four(t_dict *dict, char *str)
{
	int	len;

	len = ft_strlen(str);
	if (str[0] != '0' )
	{
		ft_putstr_space(dict_find(make_str(str[0]), dict));
		ft_putstr(dict_find_d("1000", dict));
		if (str[1] != '0')
			write(1, ",", 1);
		if (str[3] != '0')
			write(1, " ", 1);
	}
	three(dict, str + 1);
}

void	five(t_dict *dict, char *str)
{
	int	len;

	len = ft_strlen(str);
	if (str[0] != '0' )
	{
		two(dict, str);
		write(1, " ", 1);
		ft_putstr(dict_find_d("1000", dict));
		if (str[2] != '0')
			write(1, ",", 1);
		if (str[4] != '0')
			write(1, " ", 1);
	}
	three(dict, str + 2);
}
