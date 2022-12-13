# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 15:08:27 by johmatos          #+#    #+#              #
#    Updated: 2022/12/13 15:07:56 by johmatos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = push_swap
INCLUDE = ./include
LIB = libft.a
VPATH = ./src
SOURCE = main.c

all: TARGET

TARGET: $(LIB)
	gcc -g3 -I./include -I./lib/include/ -o $(TARGET) ./src/main.c -L./lib -lft

$(LIB):
	make -C ./lib/

fclean:
	make -C ./lib fclean
	rm $(TARGET)
