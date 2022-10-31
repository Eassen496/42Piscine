/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:30:27 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/27 12:06:40 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	pass;

	pass = 0;
	result = 1;
	if (power == 0)
		result = 1;
	else if (power < 0)
		result = 0;
	else
	{
		while (pass != power)
		{
			result = result * nb;
			pass++;
		}
	}
	return (result);
}
