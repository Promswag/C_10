/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:11:20 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/02/02 14:52:37 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <libgen.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <sys/errno.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

# define BUF_SIZE 29696

typedef struct s_jpp
{
	int	i;
	int	r;
	int	p;
	int	s;
	int	o;
	int	a;
}	t_jpp;

int				ft_file_handler(char *filename, t_jpp kek);
void			ft_read_stdin(void);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_atoi_raw(char *str);
char			*ft_strcat(char *dest, char *src);
void			ft_error_handler(char *filename);
int				ft_only_nums(char *str);

#endif