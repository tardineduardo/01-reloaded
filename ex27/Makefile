# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 14:35:15 by eduribei          #+#    #+#              #
#    Updated: 2024/04/23 14:35:16 by eduribei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file
SRC	=	*.c
SRCS	= ${SRC}
OBJS	= ${SRCS:.c=.o}
CFLAGS	= -Wall -Wextra -Werror
GCC		= cc

all:	${NAME}

.c.o:
	@echo "this is the .c.o part"
	${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	@echo "this is the NAME: OBJS part"
	${GCC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
	@echo "this is the clean part"
	rm -f $(OBJS)

fclean: clean
	@echo "this is the fclean part"
	rm -f $(NAME)

re: fclean all
	@echo "this is the 're: fclean all' part"

.PHONY: all clean fclean re