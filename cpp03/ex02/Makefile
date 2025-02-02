# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/01 12:01:17 by ryagoub           #+#    #+#              #
#    Updated: 2025/02/01 16:29:11 by ryagoub          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program
CPPFILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++

all: $(NAME)

$(NAME):
	$(CPP) $(CFLAGS) $(CPPFILES) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
