/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tdechand <tdechand@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:28:17 by Tdechand          #+#    #+#             */
/*   Updated: 2022/07/26 16:21:16 by Tdechand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_chset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*get_word(int size, char *start, int end)
{
	char	*buff;

	buff = malloc((size + 1) * sizeof(char));
	buff = ft_strncpy(buff, start, end);
	return (buff);
}

char	**make_tab(char *str, char *charset)
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
		if (is_in_chset(str[i], charset))
		{
			if (j != i)
				a++;
			j = i + 1;
		}
		i++;
	}
	if (i != j)
		a++;
	tab = malloc((a + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		a;
	char	**tab;

	i = 0;
	j = 0;
	a = 0;
	tab = make_tab(str, charset);
	while (str[i])
	{
		if (is_in_chset(str[i], charset))
		{
			if (j != i)
				tab [a++] = get_word((i - j), str + j, i - j);
			j = i + 1;
		}
		i++;
	}
	if (i != j)
		tab[a++] = get_word(i - j, str + j, i - j);
	tab[a] = 0;
	free(str);
	return (tab);
}
