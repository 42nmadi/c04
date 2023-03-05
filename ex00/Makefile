# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/05 17:44:11 by nmadi             #+#    #+#              #
#    Updated: 2023/03/05 17:45:32 by nmadi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

SRCS = ./src/ClapTrap.cpp \
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