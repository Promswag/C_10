/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:07:54 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/02/02 18:43:34 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-' && ft_strlen(argv[i]) == 1)
			ft_read_stdin();
		else
			ft_read_file(argv[0], argv[i]);
		i++;
	}
	if (argc == 1)
	{
		ft_read_stdin();
	}
	return (0);
}
