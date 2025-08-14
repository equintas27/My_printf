# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: equintas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/11 21:53:09 by equintas          #+#    #+#              #
#    Updated: 2025/07/18 11:18:23 by equintas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC	=	cc

CFLAGS	=	-Wall -Wextra -Werror

OBJS	=	ft_printf.o ft_printf_utils.o ft_printf_utils1.o

RM	=	rm -f

FLAGLIB	=	ar rcs

HEADER	=	ft_printf.h

all:	$(NAME)

$(OBJS): $(HEADER)

$(NAME): $(OBJS)
	$(FLAGLIB) $(NAME) $(OBJS)

clean :
	$(RM)	$(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean	all

.PHONY: all clean fclean re
