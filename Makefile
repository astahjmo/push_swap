# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 15:08:27 by johmatos          #+#    #+#              #
#    Updated: 2023/02/13 15:28:47 by johmatos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
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

TESTER_URL=https://gist.githubusercontent.com/astahjmo/46c4c7dbbcd98a3fd90bde56410f65d9/raw/27fb01fcf021ff82ace6515f7a6d4f7e27eb90d7/push_swap_test.sh
CHECKER_URL=https://projects.intra.42.fr/uploads/document/document/12420/checker_linux

ifdef DEBUG
    CFLAGS += -g3 -D DEBUG=1
endif
	
all: $(NAME)

$(NAME): $(OBJS)
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
	@if test -f $(NAME); then rm $(NAME); fi
	@if test -f ./test.sh; then rm ./test.sh; fi
	@if test -f ./checker_linux; then rm ./checker_linux; fi

test: all
	@curl -L $(TESTER_URL) > test.sh
	@curl -L $(CHECKER_URL) > checker_linux
	@chmod +x checker_linux
	@sh test.sh

re: fclean all
