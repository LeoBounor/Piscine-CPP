# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 12:59:02 by Leo               #+#    #+#              #
#    Updated: 2023/01/06 13:16:44 by Leo              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS		=	Harl.cpp					\
				
OBJS		=	$(addprefix ${OBJS_DIR}/, ${SRCS:.cpp=.o})

OBJS_DIR	=	objects

INCLUDES	=	Harl.hpp					\
				
CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

LIBINCLUDES	=	-Iincludes 

LIB			=	libharl.a			

EXEC		=	harl

RM			=	rm -rf	

MKDIR		=	mkdir -p

all:		${EXEC}

${OBJS_DIR}/%.o: 	%.cpp	${INCLUDES} Makefile
			${MKDIR} $(@D)
			${CC} ${CFLAGS} ${LIBINCLUDES} -c $< -o $@

$(LIB):		${OBJS} ${INCLUDES}
			ar rcs ${LIB} ${OBJS}


${EXEC}:	main.cpp ${LIB}
			$(CC) ${CFLAGS} ${LIBINCLUDES} main.cpp ${EXECINCLUDES} ${LIB} -o ${EXEC}  

clean:
			${RM} ${OBJS} $(OBJS_DIR)

fclean:		clean
			${RM} ${LIB} ${EXEC} ${LIB} ${EXEC}.dSYM

re:			fclean all

.PHONY: 	all clean fclean re object