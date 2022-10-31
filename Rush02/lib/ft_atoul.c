/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoul.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdechand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:36:07 by tdechand          #+#    #+#             */
/*   Updated: 2022/07/19 16:12:59 by tdechand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	iss(char c)
{
	if (c == '\t')
		return (1);
	else if (c == '\n')
		return (1);
	else if (c == '\v')
		return (1);
	else if (c == '\f')
		return (1);
	else if (c == '\r')
		return (1);
	else if (c == ' ')
		return (1);
	else
		return (0);
}

unsigned long	ft_numb(char *str, unsigned long i)
{
	unsigned long	buff;

	buff = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		buff = buff * 10 + (str[i] - 48);
		i++;
	}
	return (buff);
}

unsigned long	ft_atoul(char *str)
{
	unsigned long	i;
	unsigned long	nbr_moins;
	int				is_impair;

	i = 0;
	nbr_moins = 0;
	is_impair = 1;
	while (iss(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nbr_moins++;
		if (nbr_moins % 2 == 1)
			is_impair = -1;
		else
			is_impair = 1;
		i++;
	}
	return (ft_numb(str, i) * is_impair);
}
