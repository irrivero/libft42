# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 10:09:23 by irivero-          #+#    #+#              #
#    Updated: 2023/05/08 14:41:32 by irivero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CCFLAGS = -Wall -Werror -Wextra

NAME = libft
SRC = ft_*.c
OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CCFLAGS) $(OBJ) -o $(NAME)
	
%.o: %.c libft.h
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	
fclean:	clean
	rm -f $(NAME)

re: fclean all