/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tdechand <tdechand@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 08:11:40 by Tdechand          #+#    #+#             */
/*   Updated: 2022/07/28 11:24:08 by Tdechand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
char			*ft_strcat(char *dest, char *src);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcpy(char *dest, char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strstr(char *str, char *to_find);
void			ft_swap(int *a, int *b);
int				ft_atoi(char *str);
long long		ft_atol(char *str);
unsigned long	ft_atoul(char *str);
int				*ft_range(int min, int max);
int				ft_recursive_power(int nb, int power);
char			**ft_split(char *str, char *charset);
int				ft_sqrt(int nb);
char			*ft_strdup(char *src);
char			*ft_strjoin(int size, char **strs, char *sep);
void			ft_putstr_space(char *str);
char			*make2_str(char c, char d);
char			*make_str(char c);

#endif
