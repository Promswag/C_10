/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:07:54 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/02/02 15:23:13 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int	ft_print_missing_arg(void)
{
	write(2, "ft_tail: option requires an argument -- c\n", 42);
	write(2, "usage: tail [-F | -f | -r] [-q] ", 32);
	write(2, "[-b # | -c # | -n #] [file ...]\n", 32);
	return (0);
}

int	ft_print_illegal_offset(char *str)
{
	write(2, "ft_tail: illegal offset -- ", 27);
	write(2, str, ft_strlen(str));
	write(2, "\n", 1);
	return (0);
}

int	ft_args_handler(int argc, char **argv)
{
	if (argc == 1)
		return (1);
	if (argc == 2)
	{
		if (ft_strcmp("-c", argv[1]) == 0)
			return (ft_print_missing_arg());
	}
	if (ft_strcmp("-c", argv[1]) == 0)
	{
		if (ft_only_nums(argv[2]))
			return (2);
		else
			return (ft_print_illegal_offset(argv[2]));
	}
	else if (ft_strncmp("-c", argv[1], 2) == 0)
	{
		if (ft_only_nums(argv[1] + 2))
			return (3);
		else
			return (ft_print_illegal_offset(argv[1] + 2));
	}
	return (0);
}

int	main(int argc, char **argv)
{	
	t_jpp	_s;

	_s.r = 1;
	_s.p = 1;
	_s.i = 2;
	_s.a = argc;
	_s.s = ft_args_handler(argc, argv);
	if (_s.s == 0)
		return (-1);
	else if (_s.s == 1)
		return (0);
	else if (_s.s == 2)
		_s.o = ft_atoi_raw(argv[_s.i]);
	else if (_s.s == 3)
		_s.o = ft_atoi_raw(argv[--_s.i] + 2);
	while (++_s.i < argc)
	{
		if (_s.r == -1 && _s.p != -1)
			ft_putstr("\n");
		_s.r = ft_file_handler(argv[_s.i], _s);
		if (_s.i < argc + 1 && _s.r == -1)
			write(2, "\n", 1);
		_s.p = _s.r;
	}
	return (0);
}
