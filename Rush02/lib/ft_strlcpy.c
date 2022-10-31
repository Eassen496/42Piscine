/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdechand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:52:58 by tdechand          #+#    #+#             */
/*   Updated: 2022/07/16 20:29:13 by tdechand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_size_src(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_src;

	size_src = ft_size_src(src);
	if (size == 0)
		return (size_src);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	while (i <= size)
	{
		dest[i] = '\0';
		i++;
	}
	return (size_src);
}
