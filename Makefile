# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aestraic <aestraic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 13:20:07 by aestraic          #+#    #+#              #
#    Updated: 2022/07/05 19:56:33 by aestraic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =  	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcat.c ft_strlcpy.c\
ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
ft_memchr.c ft_memcmp.c  ft_atoi.c ft_calloc.c ft_strdup.c ft_strnstr.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c\
ft_strjoin.c ft_substr.c ft_itoa.c ft_striteri.c ft_strtrim.c ft_strmapi.c\
ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c\
ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstsize.c

HEADER_PATH = header
LIB_PATH = .
COMPILED = $(SRC:.c=.o) 

all: $(NAME)

%.o : %.c 
	@cc -Wall -Wextra -Werror -I $(HEADER_PATH) -c $^ -o$@	

$(NAME): $(COMPILED)
	@ar -rucv $(LIB_PATH)/$(NAME) $^

clean:
	rm -f $(COMPILED)

fclean: clean
	rm -f $(LIB_PATH)/$(NAME)
	
re: fclean $(NAME)

.PHONY: clean fclean re bonus additional