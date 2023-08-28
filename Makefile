# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anguinau <anguinau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/16 20:43:33 by anguinau          #+#    #+#              #
#    Updated: 2020/11/25 18:27:00 by anguinau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= src/ft_memset.c src/ft_bzero.c src/ft_memcpy.c src/ft_memccpy.c src/ft_memmove.c	\
	  src/ft_memchr.c src/ft_memcmp.c src/ft_strlen.c src/ft_isalpha.c src/ft_isdigit.c	\
	  src/ft_isalnum.c src/ft_isascii.c src/ft_isprint.c src/ft_toupper.c src/ft_tolower.c	\
	  src/ft_strchr.c src/ft_strrchr.c src/ft_strncmp.c src/ft_strlcpy.c src/ft_strlcat.c	\
	  src/ft_strnstr.c src/ft_atoi.c src/ft_calloc.c src/ft_strdup.c src/ft_substr.c	\
	  src/ft_strjoin.c src/ft_strtrim.c src/ft_split.c src/ft_itoa.c src/ft_strmapi.c	\
	  src/ft_putchar_fd.c src/ft_putstr_fd.c src/ft_putendl_fd.c src/ft_putnbr_fd.c

B_SRCS	= src/ft_lstnew.c src/ft_lstadd_front.c src/ft_lstsize.c src/ft_lstlast.c		\
	  src/ft_lstclear.c src/ft_lstadd_back.c src/ft_lstdelone.c src/ft_lstiter.c		\
	  src/ft_lstmap.c

OBJS	= $(SRCS:.c=.o)
B_OBJS	= $(B_SRCS:.c=.o)

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

.c.o		:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}


all		:	${NAME}

bonus		:	${NAME} ${B_OBJS}
			ar rcs ${NAME} ${OBJS} ${B_OBJS}

${NAME}		:	${OBJS}
			ar rcs ${NAME} ${OBJS}

so		:
			$(CC) -c -fPIC $(CFLAGS) $(SRCS) ${B_SRCS}
			gcc -shared -o libft.so $(OBJS) ${B_OBJS}
clean		:
			${RM} ${OBJS} ${B_OBJS}

fclean		:	clean
			${RM} ${NAME} libft.so

re		:	fclean all

.PHONY		:	all bonus clean fclean re
