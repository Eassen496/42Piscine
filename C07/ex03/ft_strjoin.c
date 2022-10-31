/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:22:48 by ale-roux          #+#    #+#             */
/*   Updated: 2022/08/02 20:23:44 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat_w0(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_check_mem(unsigned int *mem_size, int size, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		*mem_size += ft_strlen(strs[i]);
		if (i < size - 1)
			*mem_size += ft_strlen(sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char			*str_ret;
	int				i;
	unsigned int	mem_size;

	i = 0;
	mem_size = 0;
	if (size <= 0)
	{
		str_ret = malloc(1);
		str_ret[0] = 0;
		return (str_ret);
	}
	ft_check_mem(&mem_size, size, strs, sep);
	str_ret = malloc(mem_size + 1);
	str_ret[0] = 0;
	if (str_ret == NULL)
		return (NULL);
	while (i < size)
	{
		ft_strcat_w0(str_ret, strs[i]);
		if (i < size - 1)
			ft_strcat_w0(str_ret, sep);
		i++;
	}
	return (str_ret);
}
