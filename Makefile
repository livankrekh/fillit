# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/02 12:22:29 by vtiterin          #+#    #+#              #
#    Updated: 2016/12/02 12:22:31 by vtiterin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= fillit
GCC		= gcc
WWW		= -Wall -Wextra -Werror
SRC		= ft_allocate.c ft_creatmap.c ft_include.c ft_validator.c main.c remap.c solver.c
OBJ		= $(SRC:.c=.o)
LIBFT	= ./libft/libft.a
LIBINC	= -I./libft
LIBLINK	= -L./libft -lft
SRCS 	= ./src/
INC		= ./includes/

all: libft $(NAME)

%.o:$(SRCS)%.c
	$(GCC) $(WWW) $(LIBINC) -I $(INC) -o $@ -c $<

libft: $(LIBFT)

$(LIBFT):
	make -C ./libft

$(NAME): $(OBJ)
	$(GCC) $(LIBLINK) -o $(NAME) $(OBJ)

clean: cleanlibft
	rm -rf $(OBJ)

cleanlibft:
	make clean -C ./libft 

fclean: clean
	rm -rf $(NAME) $(LIBFT)

re: fclean all
