# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 10:09:23 by irivero-          #+#    #+#              #
#    Updated: 2023/05/12 14:34:50 by irivero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CCFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

NAME = libft.a

SRC = ft_isalpha.c		\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_strlen.c		\
		ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c		\
		ft_strncmp.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strnstr.c	\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_split.c		\
		ft_itoa.c		\
		ft_strmapi.c	\
		ft_striteri.c	\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		main.c

SRCB = ft_lstnew.c 			\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstclear.c		\
		ft_lstdelone.c		\
		ft_lstiter.c		\
		ft_lstmap.c			\
		$(SRC)

SRC_DIR = ./
SRC_A = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC)))
SRC_B = $(addprefix $(SRCB_DIR), $(addsuffix .c, $(SRCB)))

OBJ_DIR = ./
OBJ_A = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC))
OBJ_B = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRCB)))

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CCFLAGS) -c $< -o $@

$(NAME): $(OBJ_A)
	$(AR) $(ARFLAGS) $@ $^

bonus: $(OBJ_B)
	$(AR) $(ARFLAGS) $(NAME) $^

OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)

.PHONY: bonus all clean fclean re

all: $(NAME)

clean:
	$(RM) $(OBJ_A) $(OBJ_B) 
	
fclean:	clean
	$(RM) $(NAME)

re: clean all