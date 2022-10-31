/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tdechand <tdechand@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:28:17 by Tdechand          #+#    #+#             */
/*   Updated: 2022/07/26 16:21:16 by Tdechand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_dict.h"

char	*get_words(int size, char *start, int end)
{
	char	*buff;

	buff = malloc((size + 1) * sizeof(char));
	buff = ft_strncpy(buff, start, end);
	return (buff);
}

void	first_part(char *str, int *i, int *j)
{
	while (str[*i] == '\t' || str[*i] == '\n' || str[*i] == '\v'
		|| str[*i] == '\f' || str[*i] == '\r' || str[*i] == ' ')
		(*i)++;
	if (str[*i] == '+')
		(*i)++;
	*j = *i;
	(*i)++;
	while (str[*i] >= '0' && str[*i] <= '9')
		(*i)++;
}

void	second_part(char *str, int *i, int *j)
{
	while (str[*i] >= ' ' && str[*i] <= '~' && str[*i] != ':')
		(*i)++;
	(*i)++;
	while (str[*i] == '\t' || str[*i] == '\n' || str[*i] == '\v'
		|| str[*i] == '\f' || str[*i] == '\r' || str[*i] == ' ')
		(*i)++;
	*j = *i;
	while (str[*i] >= ' ' && str[*i] <= '~')
		(*i)++;
}

char	**make_tabs(char *str)
{
	int		i;
	int		j;
	int		a;
	char	**tab;

	i = 0;
	j = 0;
	a = 0;
	while (str[i])
	{
		first_part(str, &i, &j);
		a++;
		second_part(str, &i, &j);
		a++;
		while (str[i] == '\n')
			i++;
	}
	tab = malloc((a + 1) * sizeof(char *));
	return (tab);
}

char	**ft_split2(char *str)
{
	int		i;
	int		j;
	int		a;
	char	**tab;

	i = 0;
	j = 0;
	a = 0;
	tab = make_tabs(str);
	while (str[i])
	{
		first_part(str, &i, &j);
		tab[a++] = get_words((i - j), str + j, i - j);
		second_part(str, &i, &j);
		tab[a++] = get_words((i - j), str + j, i - j);
		while (str[i] == '\n')
			i++;
	}
	tab[a] = 0;
	free(str);
	return (tab);
}
