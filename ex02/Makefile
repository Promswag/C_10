# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 15:08:24 by gbaumgar          #+#    #+#              #
#    Updated: 2022/02/02 12:06:22 by gbaumgar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_tail

SRCDIR	= ./srcs/
INCDIR	= ./includes/

SRC		= 	ft_tail\
			ft_read_file_tail\
			ft_strcmp\
			ft_atoi\
			ft_putstr\
			ft_strlen\
			ft_strcat\
			ft_error_handler\
			ft_contains_only_nums

SRCC	= ${SRC:%=${SRCDIR}%.c}
OBJS	= ${SRC:%=${SRCDIR}%.o}

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I${INCDIR}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

${OBJS}: ${SRCC}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean ${NAME}
