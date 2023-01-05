# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 15:48:53 by Leo               #+#    #+#              #
#    Updated: 2023/01/05 16:22:30 by Leo              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS		=	HumanA.cpp					\
				HumanB.cpp					\
				Weapon.cpp					\
				
OBJS		=	$(addprefix ${OBJS_DIR}/, ${SRCS:.cpp=.o})

OBJS_DIR	=	objects
SRCS_DIR	=	sources

INCLUDES	=	./includes/HumanA.hpp		\
				./includes/HumanB.hpp		\
				./includes/Weapon.hpp		\
				
CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

LIBINCLUDES	=	-Iincludes 

LIB			=	libhuman.a			

EXEC		=	human

RM			=	rm -rf	

MKDIR		=	mkdir -p

all:		${EXEC}

${OBJS_DIR}/%.o: 	${SRCS_DIR}/%.cpp	${INCLUDES} Makefile
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