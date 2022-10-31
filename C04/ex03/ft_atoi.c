/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:08:11 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/26 17:08:15 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	whitesp(char *str, int *ptr_i)
{
	int	compt;
	int	i;

	i = 0;
	compt = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			compt *= -1;
		i++;
	}
	*ptr_i = i;
	return (compt);
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = whitesp(str, &i);
	while (str[i] >= 48 && str[i] <= 57)
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	res *= sign;
	return (res);
}
