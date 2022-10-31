/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:47:54 by ale-roux          #+#    #+#             */
/*   Updated: 2022/08/02 22:47:57 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	f_len;
	unsigned int	i;

	i = 0;
	f_len = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (ft_strncmp(str + i, to_find, f_len - 1) == 0)
			return (str + i);
		else
		{
			i++;
		}
	}
	return (0);
}
