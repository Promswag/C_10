/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:38:59 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/26 19:35:20 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void	ft_read_file(char *filename)
{
	int		file;
	int		reading;
	char	buffer[4096 + 1];

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		write(2, "Cannot read file\n", 17);
		return ;
	}
	reading = 1;
	while (reading)
	{
		reading = read(file, buffer, 4096);
		buffer[reading] = '\0';
		if (reading == -1)
			write(2, "Cannot read file\n", 17);
		ft_putstr(buffer);
	}
	close(file);
}
