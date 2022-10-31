/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_in_letter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tdechand <tdechand@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:27:17 by Tdechand          #+#    #+#             */
/*   Updated: 2022/07/30 18:27:20 by Tdechand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_dict.h"

void	one(t_dict *dict, char *str);
void	two(t_dict *dict, char *str);
void	three(t_dict *dict, char *str);
void	four(t_dict *dict, char *str);
void	five(t_dict *dict, char *str);
void	six(t_dict *dict, char *str);
void	seven(t_dict *dict, char *str);
void	eight(t_dict *dict, char *str);
void	nine(t_dict *dict, char *str);
void	ten(t_dict *dict, char *str);

char	*dict_find(char *tofind, t_dict *dict)
{
	int	i;

	i = 0;
	while (dict[i].str)
	{
		if (!(ft_strcmp(dict[i].number, tofind)))
		{
			free(tofind);
			return (dict[i].str);
		}
		i++;
	}
	return (0);
}

char	*dict_find_d(char *tofind, t_dict *dict)
{
	int	i;

	i = 0;
	while (dict[i].str)
	{
		if (!(ft_strcmp(dict[i].number, tofind)))
		{
			return (dict[i].str);
		}
		i++;
	}
	return (0);
}

void	ft_print_in_letter(t_dict *dict, int sign, char *str)
{
	int	len;

	len = ft_strlen(str);
	if (sign == -1)
		ft_putstr_space("minus");
	if (len == 1)
		one(dict, str);
	if (len == 2)
		two(dict, str);
	if (len == 3)
		three(dict, str);
	if (len == 4)
		four(dict, str);
	if (len == 5)
		five(dict, str);
	if (len == 6)
		six(dict, str);
	if (len == 7)
		seven(dict, str);
	if (len == 8)
		eight(dict, str);
	if (len == 9)
		nine(dict, str);
	if (len == 10)
		ten(dict, str);
}
