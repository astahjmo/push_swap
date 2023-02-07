# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 15:08:27 by johmatos          #+#    #+#              #
#    Updated: 2023/02/07 21:23:59 by johmatos         ###   ########.fr        #
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
CFLAGS = -Wall -Wextra -Werror
BUILDPREFIX = [\033[0;32m+\033[0m]
RMPREFIX = [\033[0;31m-\033[0m]

ifdef DEBUG
    CFLAGS += -g3
endif
	
all: $(TARGET)

$(TARGET): $(OBJS)
	@echo "$(BUILDPREFIX) Creating lib"
	@make --no-print-directory -C ./lib DEBUG=1
	@$(CC) $(CFLAGS) -I$(INCLUDE) $(OBJS) -Llib -lft -o $@
	@echo "$(BUILDPREFIX) Created $@"

$(BUILDDIR)%.o: %.c
	@test -d $(BUILDDIR) || mkdir $(BUILDDIR)
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@
	@echo "$(BUILDPREFIX) building $@"
	

clean:
	@make --no-print-directory -C ./lib clean
	@rm -rf $(BUILDDIR)
	@echo "$(RMPREFIX) Cleaning build files..."

fclean: clean
	@make --no-print-directory -C ./lib fclean
	@rm $(TARGET)

re: fclean all
