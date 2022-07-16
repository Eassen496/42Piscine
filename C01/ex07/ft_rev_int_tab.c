/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 06:44:48 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/16 06:45:46 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_rev_int_tab(int *tab, int size){
	int number;
	int temp;

	number = 0;
	while(number<(size/2)){
		temp = tab[size-1-number];
		tab[size-1-number] = tab[number];
		tab[number] = temp;
		number++;
	}
}
