/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:07:54 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/02/01 21:34:10 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int	main(int argc, char **argv)
{	
	int	i;

	i = 3;
	if (argc == 2)
		ft_file_handler(argc, argv[1], 0);
	else if (argc == 4 && ft_strcmp("-c", argv[1]) == 0)
		ft_file_handler(argc, argv[3], ft_atoi_raw(argv[2]));
	else if (argc > 4 && ft_strcmp("-c", argv[1]) == 0)
	{
		while (i < argc)
		{
			ft_file_handler(argc, argv[i++], ft_atoi_raw(argv[2]));
			if (i < argc)
				ft_putstr("\n");
		}
	}
	return (0);
}
