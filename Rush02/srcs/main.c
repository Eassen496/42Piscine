/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tdechand <tdechand@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 08:26:46 by Tdechand          #+#    #+#             */
/*   Updated: 2022/07/28 13:01:09 by Tdechand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_dict.h"

int	arg_double(char *argv[], char	*path, char	*str_in)
{
	char	*buff;
	int		sign;

	free(str_in);
	str_in = ft_strdup(argv[2]);
	sign = ft_check_input(str_in);
	if (ft_check_file(argv[1]))
		return (0);
	free(path);
	buff = ft_strdup(argv[1]);
	path = buff;
	return (sign);
}

char	*read_stdin(void)
{
	char	c;
	int		a;
	char	*ret;

	c = 0;
	ret = malloc(sizeof(char) * 1024);
	a = 0;
	while (read(0, &c, 1))
	{
		ret[a] = c;
		a++;
	}
	ret[a] = 0;
	return (ret);
}

int	set_param(int argc, char *argv[], char	*path, char	*str_in)
{
	int		sign;

	sign = 0;
	if (argc == 2)
	{
		free(str_in);
		str_in = ft_strdup(argv[1]);
		sign = ft_check_input(str_in);
		return (sign);
	}
	else if (argc == 3)
	{
		return (arg_double(argv, path, str_in));
	}
	else if (argc == 1)
	{
		free(str_in);
		str_in = read_stdin();
		sign = ft_check_input(str_in);
		return (sign);
	}
	ft_putstr("Too many arguments.\n");
	return (0);
}

void	free_yourself(t_dict *dict, char *path, char *str_in)
{
	int		i;

	i = 0;
	if (dict != 0)
	{
		while (dict[i].str)
		{
			free(dict[i].str);
			free(dict[i].number);
			i++;
		}
		free(dict);
	}
	free(str_in);
	free(path);
}

int	main(int argc, char *argv[])
{
	t_dict	*dict;
	char	*path;
	char	*str_in;
	int		sign;

	path = ft_strdup("dict/numbers.dict");
	str_in = ft_strdup("");
	dict = 0;
	sign = set_param(argc, argv, path, str_in);
	if (sign != 0)
	{
		free(dict);
		dict = ft_make_dict_tab(path);
		ft_print_in_letter(dict, sign, str_in);
		write(1, "\n", 1);
	}
	free_yourself(dict, path, str_in);
	return (0);
}
