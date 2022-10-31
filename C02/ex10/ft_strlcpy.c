/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:11:31 by ale-roux          #+#    #+#             */
/*   Updated: 2022/08/03 10:11:33 by ale-roux         ###   ########.fr       */
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
