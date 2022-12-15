# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 15:08:27 by johmatos          #+#    #+#              #
#    Updated: 2022/12/13 23:23:37 by johmatos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = push_swap
INCLUDE = ./include
LIB = libft.a
VPATH = ./src ./src/analysis
SOURCE = main.c

all: TARGET

TARGET: $(LIB)
	gcc -g3 -I./include -I./lib/include/ -o $(TARGET) ./src/main.c ./src/analysis/arg_analysis.c -L./lib -lft

$(LIB):
	make -C ./lib/

fclean:
	make -C ./lib fclean
	rm $(TARGET)
