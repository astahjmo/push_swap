# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 15:08:27 by johmatos          #+#    #+#              #
#    Updated: 2023/02/05 21:03:36 by johmatos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = push_swap
INCLUDE = ./include/
LIB = libft.a
VPATH = ./src ./src/logics ./src/algorithms ./src/instructions ./src/utils
SOURCES = arg_analysis.c list_initialize.c stack_manage.c main.c \
		  ft_addback.c ft_addfront.c ft_nodenew.c ft_lastnode.c swap.c \
		  push.c rotate.c print_ll.c reverse_rotate.c reverse_rotate_ab.c \
		  rotate_ab.c sort_handler.c simple_sort.c complex_sort.c mapper_index.c \
		  after_execution.c
BUILDDIR = ./build/
OBJS = $(addprefix $(BUILDDIR), $(SOURCES:.c=.o))
CC = gcc 
CFLAGS = -g -Wall -Wextra -Werror 

all: $(TARGET)

$(TARGET): $(OBJS)
	make -C ./lib DEBUG=1
	$(CC) $(CFLAGS) -I$(INCLUDE) $(OBJS) -Llib -lft -o $@

$(BUILDDIR)%.o: %.c
	test -d $(BUILDDIR) || mkdir $(BUILDDIR)
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

fclean:
	make -C ./lib fclean
	rm -rf $(BUILDDIR)
	rm $(TARGET)
