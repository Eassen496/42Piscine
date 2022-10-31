/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 05:24:41 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/18 17:40:32 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	launch_function(char *s1, char *s2)
{
	int	value;

	value = 0;
	if (*s1 == '\0')
	{
		value = -1;
	}
	else if (*s2 == '\0')
	{
		value = 1;
	}
	return (value);
}	

int	short_function(char *s1, char *s2)
{
	int	value;

	value = 0;
	if (*s1 < *s2)
	{
		value = -1;
	}
	else
	{
		value = 1;
	}
	return (value);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	value;

	value = 0;
	while (((*s1 != '\0') || (*s2 != '\0')) && (value == 0))
	{
		value = launch_function(s1, s2);
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			value = short_function(s1, s2);
		}
	}
	return (value);
}
