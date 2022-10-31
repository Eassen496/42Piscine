/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   six_to_ten.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tdechand <tdechand@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:46:01 by Tdechand          #+#    #+#             */
/*   Updated: 2022/07/30 19:46:03 by Tdechand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_dict.h"

char	*dict_find_d(char *tofind, t_dict *dict);
char	*dict_find(char *tofind, t_dict *dict);
void	one(t_dict *dict, char *str);
void	two(t_dict *dict, char *str);
void	three(t_dict *dict, char *str);
void	four(t_dict *dict, char *str);
void	five(t_dict *dict, char *st);

void	six(t_dict *dict, char *str)
{
	int	len;

	len = ft_strlen(str);
	if (str[0] != '0' )
	{
		three(dict, str);
		write(1, " ", 1);
		ft_putstr(dict_find_d("1000", dict));
		if (str[3] != '0')
			write(1, ",", 1);
		if (str[5] != '0')
			write(1, " ", 1);
	}
	three(dict, str + 3);
}

void	seven(t_dict *dict, char *str)
{
	int	len;

	len = ft_strlen(str);
	if (str[0] != '0' )
	{
		one(dict, str);
		write(1, " ", 1);
		ft_putstr(dict_find_d("1000000", dict));
		if (str[1] != '0' || str[4] != '0')
			write(1, ",", 1);
		if (str[6] != '0')
			write(1, " ", 1);
	}
	six(dict, str + 1);
}

void	eight(t_dict *dict, char *str)
{
	int	len;

	len = ft_strlen(str);
	if (str[0] != '0' )
	{
		two(dict, str);
		write(1, " ", 1);
		ft_putstr(dict_find_d("1000000", dict));
		if (str[2] != '0' || str[5] != '0')
			write(1, ",", 1);
		if (str[7] != '0')
			write(1, " ", 1);
	}
	six(dict, str + 2);
}

void	nine(t_dict *dict, char *str)
{
	int	len;

	len = ft_strlen(str);
	if (str[0] != '0' )
	{
		three(dict, str);
		write(1, " ", 1);
		ft_putstr(dict_find_d("1000000", dict));
		if (str[3] != '0' || str[6] != '0')
			write(1, ",", 1);
		if (str[8] != '0')
			write(1, " ", 1);
	}
	six(dict, str + 3);
}

void	ten(t_dict *dict, char *str)
{
	int	len;

	len = ft_strlen(str);
	if (str[0] != '0' )
	{
		ft_putstr_space(dict_find(make_str(str[0]), dict));
		ft_putstr(dict_find_d("1000000000", dict));
		if (str[1] != '0')
			write(1, ",", 1);
		if (str[9] != '0')
			write(1, " ", 1);
	}
	nine(dict, str + 1);
}
