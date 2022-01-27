/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:38:59 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/27 16:56:37 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void	ft_error_handler(char *filename)
{
	write(2, "ft_cat: ", 8);
	write(2, filename, ft_strlen(filename));
	write(2, ": ", 2);
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	write(2, "\n", 1);
}

void	ft_read_file(char *filename)
{
	int		file;
	int		reading;
	char	buffer[4096 + 1];

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (ft_error_handler(filename));
	reading = 1;
	while (reading)
	{
		reading = read(file, buffer, 4096);
		buffer[reading] = '\0';
		if (reading == -1)
			return (ft_error_handler(filename));
		ft_putstr(buffer);
	}
	close(file);
}
