# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/05 18:58:57 by nmadi             #+#    #+#              #
#    Updated: 2023/03/06 10:14:32 by nmadi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

SRCS = ./src/Animal.cpp \
		./src/Cat.cpp \
		./src/Dog.cpp \
		./src/WrongCat.cpp \
		./src/WrongAnimal.cpp \
		./src/Brain.cpp \
		./src/main.cpp

OBJS = $(SRCS:cpp=o)

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re