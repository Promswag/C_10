/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:07:54 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/02/02 18:10:35 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_read_file(argv[1]);
	return (0);
}
