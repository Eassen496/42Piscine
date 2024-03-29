/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:51:19 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/20 12:47:32 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str && (((str[i] >= 'a') && (str[i] <= 'z'))
			|| ((str[i] >= 'A') && (str[i] <= 'Z'))))
		i++;
	if (str[i])
		return (0);
	else
		return (1);
}
