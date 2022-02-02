/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contains_only_nums.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:00:59 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/02/02 12:18:02 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int	ft_only_nums(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] < 48 || str[i] > 57)
			return (0);
	return (1);
}
