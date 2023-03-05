# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/05 17:44:11 by nmadi             #+#    #+#              #
#    Updated: 2023/03/05 18:56:14 by nmadi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

SRCS = ./src/Animal.cpp \
		./src/Cat.cpp \
		./src/Dog.cpp \
		./src/WrongCat.cpp \
		./src/WrongAnimal.cpp \
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