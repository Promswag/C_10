/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_stdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:48:40 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/27 18:34:58 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void	ft_read_stdin(void)
{
	int		reading;
	char	buffer[4096 + 1];

	reading = 1;
	while (reading)
	{
		reading = read(0, buffer, 4096);
		if (reading == -1)
		{
			write(2, strerror(errno), ft_strlen(strerror(errno)));
			return ;
		}
		buffer[reading] = '\0';
		ft_putstr(buffer);
	}
}
