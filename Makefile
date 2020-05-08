# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/18 12:58:56 by lcouto            #+#    #+#              #
#    Updated: 2020/05/08 18:52:12 by lcouto           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft

DIR_SRC = src

DIR_OBJS = objs

HEADER = include

SOURCES = ft_printf.c ft_id_conversion.c ft_distribute.c ft_process_int.c \
		  ft_process_char.c ft_process_string.c ft_process_percent.c ft_process_hexa.c \
		  ft_process_unsigned.c ft_process_ptraddress.c ft_init_val.c ft_check_flags.c \
		  ft_get_width.c ft_get_precision.c ft_check_conversions.c ft_conversion_exists.c

SRC = $(addprefix $(DIR_SRC)/,$(SOURCES))

OBJS = $(addprefix $(DIR_OBJS)/,$(SOURCES:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT)
	cp libft/libft.a ./$(NAME)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(DIR_OBJS)/%.o: $(DIR_SRC)/%.c
	mkdir -p objs
	gcc -Wall -Wextra -Werror -g -I $(HEADER) -o $@ -c $<

clean:
	rm -f $(OBJS)
	rm -rf $(DIR_OBJS)
	make clean -C $(LIBFT)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT)

re: fclean all

bonus: fclean all

.PHONY: all clean fclean re bonus

