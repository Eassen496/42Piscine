/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:47:48 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/20 13:33:39 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int	num1;
	unsigned int	num2;
	unsigned int	result;
	unsigned char	numerical;

	num1 = 0;
	num2 = 0;
	result = 1;
	numerical = 48;
	while (str[num1] && result)
	{
		if (str[num1] == numerical)
		{
			num1++;
			num2 = 0;
		}
		else if (num2 < 10)
			numerical = 48 + num2++;
		else
			result = 0;
	}
	return (result);
}
