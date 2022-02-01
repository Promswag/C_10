/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:44:04 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/02/01 12:06:44 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_whitespace(char c)
{	
	int		i;
	char	whitespace[6];

	i = 0;
	whitespace[0] = ' ';
	whitespace[1] = '\f';
	whitespace[2] = '\n';
	whitespace[3] = '\r';
	whitespace[4] = '\t';
	whitespace[5] = '\v';
	while (i < 6)
		if (c == whitespace[i++])
			return (1);
	return (0);
}

int	ft_atoi_raw(char *str)
{
	int			i;
	int			sign;
	long int	result;

	i = -1;
	sign = 1;
	result = 0;
	while ((str[++i]) >= 48 && str[i] <= 57)
		result = result * 10 + str[i] - 48;
	return (result * sign);
}
