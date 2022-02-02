/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file_tail.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:38:59 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/02/02 14:56:08 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void	ft_print_tail(char *str, int offset)
{
	int	length;

	length = ft_strlen(str);
	if (offset > length)
		ft_putstr(str);
	else
		ft_putstr(str + length - offset);
}

void	ft_print_multiple_tail(char *filename, char *str, int offset)
{
	int		length;

	length = ft_strlen(str);
	ft_putstr("==> ");
	ft_putstr(filename);
	ft_putstr(" <==\n");
	if (offset > length)
		ft_putstr(str);
	else
		ft_putstr(str + length - offset);
}

char	*ft_read_file(int file)
{	
	int		reading;
	char	buffer[BUF_SIZE + 1];
	char	*str;

	buffer[0] = '\0';
	reading = read(file, buffer, BUF_SIZE);
	if (reading == -1)
		return (NULL);
	buffer[reading] = '\0';
	str = buffer;
	return (str);
}

int	ft_open_file(char *filename)
{
	int		file;

	file = open(filename, O_RDONLY);
	if (file == -1)
		ft_error_handler(filename);
	return (file);
}

int	ft_file_handler(char *filename, t_jpp kek)
{
	int		file;
	char	*buffer;

	file = ft_open_file(filename);
	if (file == -1)
		return (-1);
	buffer = ft_read_file(file);
	if (*buffer == '\0')
		return (-1);
	if (kek.p == 0 || kek.p == -1)
		ft_putstr("\n");
	if ((kek.s == 3 && kek.a == 3) || (kek.s == 2 && kek.a == 4))
		ft_print_tail(buffer, kek.o);
	else
		ft_print_multiple_tail(filename, buffer, kek.o);
	close(file);
	return (0);
}
