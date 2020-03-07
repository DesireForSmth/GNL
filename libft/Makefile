# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarc <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/16 15:43:24 by mcarc             #+#    #+#              #
#    Updated: 2019/09/30 12:11:48 by mcarc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDE = ./srcs/
SRC += $(INCLUDE)ft_btree_create_node.c
SRC += $(INCLUDE)ft_btree_apply_prefix.c
SRC += $(INCLUDE)ft_btree_apply_infix.c
SRC += $(INCLUDE)ft_btree_apply_suffix.c
SRC += $(INCLUDE)ft_btree_insert_data.c
SRC += $(INCLUDE)ft_memset.c
SRC += $(INCLUDE)ft_bzero.c
SRC += $(INCLUDE)ft_memcpy.c
SRC += $(INCLUDE)ft_memccpy.c
SRC += $(INCLUDE)ft_memmove.c
SRC += $(INCLUDE)ft_memchr.c
SRC += $(INCLUDE)ft_memcmp.c
SRC += $(INCLUDE)ft_strlen.c
SRC += $(INCLUDE)ft_strdup.c
SRC += $(INCLUDE)ft_strnew.c
SRC += $(INCLUDE)ft_memalloc.c
SRC += $(INCLUDE)ft_strcpy.c
SRC += $(INCLUDE)ft_strncpy.c
SRC += $(INCLUDE)ft_strcat.c
SRC += $(INCLUDE)ft_strncat.c
SRC += $(INCLUDE)ft_strchr.c
SRC += $(INCLUDE)ft_strrchr.c
SRC += $(INCLUDE)ft_strstr.c
SRC += $(INCLUDE)ft_strnstr.c
SRC += $(INCLUDE)ft_strcmp.c
SRC += $(INCLUDE)ft_strncmp.c
SRC += $(INCLUDE)ft_isalpha.c
SRC += $(INCLUDE)ft_isalnum.c
SRC += $(INCLUDE)ft_memdel.c
SRC += $(INCLUDE)ft_strdel.c
SRC += $(INCLUDE)ft_strclr.c
SRC += $(INCLUDE)ft_striter.c
SRC += $(INCLUDE)ft_striteri.c
SRC += $(INCLUDE)ft_strmap.c
SRC += $(INCLUDE)ft_strmapi.c
SRC += $(INCLUDE)ft_strequ.c
SRC += $(INCLUDE)ft_strnequ.c
SRC += $(INCLUDE)ft_strsub.c
SRC += $(INCLUDE)ft_strjoin.c
SRC += $(INCLUDE)ft_putchar.c
SRC += $(INCLUDE)ft_putstr.c
SRC += $(INCLUDE)ft_putendl.c
SRC += $(INCLUDE)ft_putnbr.c
SRC += $(INCLUDE)ft_isdigit.c
SRC += $(INCLUDE)ft_isascii.c
SRC += $(INCLUDE)ft_isprint.c
SRC += $(INCLUDE)ft_toupper.c
SRC += $(INCLUDE)ft_tolower.c
SRC += $(INCLUDE)ft_atoi.c
SRC += $(INCLUDE)ft_strlcat.c
SRC += $(INCLUDE)ft_strtrim.c
SRC += $(INCLUDE)ft_strsplit.c
SRC += $(INCLUDE)ft_itoa.c
SRC += $(INCLUDE)ft_putchar_fd.c
SRC += $(INCLUDE)ft_putstr_fd.c
SRC += $(INCLUDE)ft_putendl_fd.c
SRC += $(INCLUDE)ft_putnbr_fd.c
SRC += $(INCLUDE)ft_lstnew.c
SRC += $(INCLUDE)ft_lstdelone.c
SRC += $(INCLUDE)ft_lstdel.c
SRC += $(INCLUDE)ft_lstadd.c
SRC += $(INCLUDE)ft_lstiter.c
SRC += $(INCLUDE)ft_lstmap.c

SRCDEL = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRCDEL)
	@ar rc $(NAME) $(SRCDEL)

%.o: %.c
	@gcc -c -I. -Wall -Wextra -Werror $< -o $@

clean:
	@/bin/rm -f $(SRCDEL)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean