# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 15:08:24 by gbaumgar          #+#    #+#              #
#    Updated: 2022/01/31 14:07:49 by gbaumgar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_cat

SRCDIR	= ./srcs/
INCDIR	= ./includes/

SRC		= 	ft_cat \
			ft_read_file \
			ft_putstr \
			ft_read_stdin \
			ft_strlen
			
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


