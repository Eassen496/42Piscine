/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-roux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:24:36 by ale-roux          #+#    #+#             */
/*   Updated: 2022/07/13 12:24:39 by ale-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void int_to_char(int n){  /* convert int to char and print it */
    if(n<10 && n >= 0){
        char c = 48 + n;
        write(1, &c, 1);
    }
}

void ft_print_comb(void){
    int a = 0;
    int b = 1;
    int c;
    int boolean = 1;
    while (boolean==1)
    {
        c = b+1;
        while(c<=9)
        {
            int_to_char(a);
            int_to_char(b);
            int_to_char(c);
            write(1, ", ", 2);
            c++;
        }
        b++;
        if(b==9)
        {
            a++;
            b = a + 1;
        }
        if (a==7 && b==8 && c==10){
            c--;
            boolean = 0;
        }
    }
    int_to_char(a);
    int_to_char(b);
    int_to_char(c);
    write(1, "\n", 1);
}
