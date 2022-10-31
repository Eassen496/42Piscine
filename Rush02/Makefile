# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Tdechand <tdechand@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 15:18:00 by Tdechand          #+#    #+#              #
#    Updated: 2022/07/27 08:21:48 by Tdechand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	rush-02

SRCS		=	$(wildcard srcs/*.c)
OBJS		=	${SRCS:.c=.o}

LIB			=	$(wildcard lib/*.c)
LIBOBJ		=	${LIB:.c=.o}

COMP		=	gcc
FLAGS		=	-Wall -Wextra -Werror

.c.o		:	
				${COMP} ${FLAGS} -I includes -c $< -o ${<:.c=.o}

${NAME}		: 	${OBJS}
				${COMP} ${FLAGS} ${OBJS} -L lib -lft -o ${NAME}

all			:	${NAME}

relibs		:	fcleanlibs libs

re			:	fclean all

libs		:	${LIBOBJ}
				ar rc lib/libft.a ${LIBOBJ}

cleanlibs	:	
				rm -f ${LIBOBJ}

fcleanlibs	:	cleanlibs
				rm -f lib/libft.a

clean		:	
				rm -f ${OBJS}

fclean		:	clean
				rm -f ${NAME}

.PHONY		:	all clean fclean re libs cleanlibs fcleanlibs		
