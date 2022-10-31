/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_dict_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tdechand <tdechand@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 10:32:09 by Tdechand          #+#    #+#             */
/*   Updated: 2022/07/30 10:32:13 by Tdechand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_dict.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

t_dict	*create_tab(const char *path)
{
	int		fd;
	char	c;
	int		a;
	t_dict	*tabret;

	fd = open(path, O_RDONLY);
	c = 0;
	a = 0;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
			(a)++;
	}
	close(fd);
	tabret = malloc(sizeof(t_dict) * ((a) + 1));
	tabret[a].str = 0;
	tabret[a].number = 0;
	return (tabret);
}

char	*create_str_from_file(const char *path)
{
	int		fd;
	char	c;
	int		a;
	char	*ret;

	fd = open(path, O_RDONLY);
	c = 0;
	a = 0;
	while (read(fd, &c, 1))
	{
		a++;
	}
	close(fd);
	ret = malloc(sizeof(char) * (a + 1));
	ret[a] = 0;
	fd = open(path, O_RDONLY);
	a = 0;
	while (read(fd, &c, 1))
	{
		ret[a] = c;
		a++;
	}
	return (ret);
}

t_dict	*ft_make_dict_tab(const char *path)
{
	t_dict	*tab_ret;
	char	**tab_word;
	int		i;
	int		a;

	tab_ret = create_tab(path);
	tab_word = ft_split2(create_str_from_file(path));
	i = 0;
	a = 0;
	while (tab_word && tab_word[i])
	{
		tab_ret[a].number = ft_strdup(tab_word[i]);
		free(tab_word[i]);
		i++;
		if (tab_word[i])
		{
			tab_ret[a].str = ft_strdup(tab_word[i]);
			free(tab_word[i]);
			i++;
		}
		a++;
	}
	free(tab_word);
	return (tab_ret);
}
