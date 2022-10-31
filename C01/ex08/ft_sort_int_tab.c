/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 07:32:11 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/16 07:37:51 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	l;
	int	l_pivot;
	int	l_permutation;

	l = 0;
	l_pivot = 0;
	l_permutation = 1;
	while (l_permutation)
	{
		l = 0;
		l_permutation = 0;
		while (l < size - 1)
		{
			if ((*(tab + l)) > (*(tab + l + 1)))
			{
				l_pivot = *(tab + l + 1);
				*(tab + l + 1) = *(tab + l);
				*(tab + l) = l_pivot;
				l_permutation = 1;
			}
			l++;
		}
	}
}
