# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 16:11:43 by johmatos          #+#    #+#              #
#    Updated: 2023/02/11 19:05:24 by johmatos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB	:= ./libft.a
VPATH	:= ./src/io/ ./src/utils/ ./src/memory/ ./src/string/
BUILDDIR := objs/
INCLUDE := /include
CC := cc
CFLAGS = -Wall -Werror -Wextra
SOURCES := ft_atoi.c ft_isalnum.c ft_isalpha.c \
		   ft_isascii.c ft_isdigit.c ft_isprint.c \
		   ft_ithex.c ft_itoa.c ft_ubase.c ft_split.c \
		   ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
		   ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		   ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
		   ft_substr.c ft_tolower.c ft_toupper.c ft_bzero.c \
		   ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		   ft_memmove.c ft_memset.c fmt_to_char.c fmt_to_decimal.c \
		   fmt_to_hex.c fmt_to_pointer.c fmt_to_string.c fmt_to_udecimal.c \
		   ft_printf.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		   ft_putstr_fd.c get_next_line_bonus.c \
		   get_next_line_utils_bonus.c parser.c ft_atol.c \

OBJS := $(addprefix $(BUILDDIR), $(SOURCES:.c=.o))
BUILDPREFIX = [\033[0;32m+\033[0m]
RMPREFIX = [\033[0;31m-\033[0m]

ifdef DEBUG
    CFLAGS += -g3
endif

all: $(LIB)

$(LIB): $(OBJS)
	@ar -rcs $@ $(OBJS)
	@echo "$(BUILDPREFIX) Created $@"

$(BUILDDIR)%.o: %.c
	@test -d $(BUILDDIR) || mkdir $(BUILDDIR)
	@$(CC) $(CFLAGS) -I./include -c $< -o $@
	@echo "$(BUILDPREFIX) building $<"

clean:
	@rm -rf $(BUILDDIR)
	@echo "$(RMPREFIX) Cleaning build files from lib"

fclean: clean
	@rm -rf $(LIB)

re: fclean all
