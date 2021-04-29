# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/11 21:19:28 by ncolomer          #+#    #+#              #
#    Updated: 2021/04/28 17:31:43 by casalaza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalpha.c ft_memchr.c ft_strchr.c ft_strncmp.c \
					ft_atoi.c ft_isascii.c ft_memcmp.c ft_strdup.c ft_strnstr.c \
					ft_bzero.c ft_isdigit.c ft_memcpy.c ft_strlcat.c ft_strrchr.c \
					ft_calloc.c ft_isprint.c ft_memmove.c ft_strlcpy.c ft_tolower.c \
					ft_isalnum.c ft_memccpy.c ft_memset.c ft_strlen.c ft_toupper.c
OBJS			= $(SRCS:.c=.o)

CC				= gcc

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus
