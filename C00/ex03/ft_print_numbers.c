# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/13 10:44:15 by ale-roux          #+#    #+#              #
#    Updated: 2022/07/13 10:44:30 by ale-roux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include <unistd.h>

void ft_putchar(char c)
{
write(1, &c, 1);
}

void ft_print_numbers(void)
{
char a = 48;
while( a != 58)
{
ft_putchar(a);
a++;
}
}
