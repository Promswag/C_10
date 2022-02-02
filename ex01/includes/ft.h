/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:11:20 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/02/02 18:42:32 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <sys/errno.h>
# include <unistd.h>

# include <stdio.h>
# include <string.h>

# define BUF_SIZE 29696

void	ft_read_file(char *prog, char *filename);
void	ft_read_stdin(void);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

#endif