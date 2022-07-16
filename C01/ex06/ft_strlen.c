/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 06:15:41 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/16 06:42:07 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_strlen (char *str)
{
	int length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}
