/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 05:49:51 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/20 16:46:45 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			result = -1;
		if (s2[i] > s1[i])
			result = 1;
		i++;
	}
	if (s1[i] == '\0' || s2[i] == '\0')
	{
		if (s1[i] == '\0')
			result = -1;
		if (s2[i] == '\0')
			result = 1;
	}
	return (result);
}
