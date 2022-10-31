/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tdechand <tdechand@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:40:57 by Tdechand          #+#    #+#             */
/*   Updated: 2022/07/29 11:03:05 by Tdechand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_H
# define FT_DICT_H

typedef struct s_dict
{
	char	*str;
	char	*number;
}					t_dict;

t_dict	*ft_make_dict_tab(const char *path);
void	ft_display_dict(t_dict *dict);
int		ft_check_input(char *input);
int		ft_check_file(char *input);
void	ft_print_in_letter(t_dict *dict, int sign, char *str);
char	**ft_split2(char *str);

#endif
