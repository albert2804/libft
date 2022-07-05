# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aestraic <aestraic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 13:20:07 by aestraic          #+#    #+#              #
#    Updated: 2022/06/06 13:58:50 by aestraic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
 
SRC = ft_conv_character.c ft_conv_hex1.c\
ft_conv_int.c ft_conv_pointer.c ft_conv_str.c ft_conv_unsigned.c\
ft_printf.c\
 
all: $(NAME)
 
$(NAME): $(SRC:.c=.o)
	@ar -rucv $(NAME) $(SRC:.c=.o)
 
%.o: %.c
	cc -Wall -Wextra -Werror -I ../header -c $^
 
clean:
	rm -f *.o *.out
 
fclean: clean
	rm -f $(NAME)
 
re: fclean all

.PHONY: clean fclean re bonus