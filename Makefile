# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/22 15:17:16 by vstockma          #+#    #+#              #
#    Updated: 2023/01/27 12:37:12 by vstockma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = push_swap.c error.c free.c operations1.c operations2.c operations3.c logic.c

OBJ = $(SRC:.c=.o)

CFLAGS = -g -Wall -Werror -Wextra

CC = cc

RM = rm -f

LIBFT_PATH = libft/

LIBFT_LIB = $(LIBFT_PATH)libft.a

.PHONY: all clean fclean re

all: comp $(NAME)

.c.o:
	$(CC) $(CFLAGS) -g -c $< -o $(<:.c=.o)

comp:
	@echo $(B)
	make -C $(LIBFT_PATH) all

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT_LIB) -o $(NAME)

clean:
	@$(RM) $(OBJ)
	@make -C $(LIBFT_PATH) clean

fclean: clean
	$(RM) $(NAME)
	@make -C $(LIBFT_PATH) fclean

re: fclean all