# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 15:08:24 by gbaumgar          #+#    #+#              #
#    Updated: 2022/01/26 19:39:13 by gbaumgar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCDIR = ./srcs/
INCDIR = ./includes/

SRC	= ft_display_file ft_read_file ft_putstr 
SRCC	= ${SRC:%=${SRCDIR}%.c}
OBJS	= ${SRC:%=${SRCDIR}%.o}

NAME	= ft_display_file

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -I${INCDIR}

all: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

${OBJS}: ${SRCC}

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${OBJS}
	rm -f ft_display_file


