/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file_tail.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:38:59 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/02/01 21:34:23 by gbaumgar         ###   ########.fr       */
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
	char	*name;


	length = ft_strlen(str);
	name = basename(filename);
	ft_putstr("==> ");
	ft_putstr(name);
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
	// char	*tmp;
	char	*str;

	reading = read(file, buffer, BUF_SIZE);
	buffer[reading] = '\0';

	// reading = 1;
	// while (reading)
	// {
	// 	reading = read(file, buffer, BUF_SIZE);
	// 	if (reading == -1)
	// 		return (NULL);
	// 	buffer[reading] = '\0';
	// 	// tmp = malloc(sizeof(char) * (ft_strlen(buffer) + ft_strlen(str) + 1));
	// 	tmp = ft_strcat(str, buffer);
	// 	str = tmp;
	// 	free(tmp);
	// }
	// return (str);
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

void	ft_file_handler(int argc, char *filename, int offset)
{
	int		file;
	char	*buffer;

	file = ft_open_file(filename);
	if (file == -1)
		return ;
	buffer = ft_read_file(file);
	if (*buffer == '\0')
		return ;
	if (argc == 4)
		ft_print_tail(buffer, offset);
	else if (argc > 4)
		ft_print_multiple_tail(filename, buffer, offset);
	close(file);
}
