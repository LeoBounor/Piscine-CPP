# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbounor <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 12:47:52 by lbounor           #+#    #+#              #
#    Updated: 2022/11/08 12:47:55 by lbounor          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

CC = c++
RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRCS:.cpp=.o}

all: $(NAME)

%.o: %.cpp
    ${CC} ${FLAGS} -c $< -o $@

$(NAME): $(OBJS) Makefile
    $(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
    $(RM) $(OBJS)

fclean: clean
    $(RM) $(NAME)

re:    fclean all

.PHONY: all clean fclean re