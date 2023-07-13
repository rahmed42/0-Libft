# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/06 15:51:13 by rahmed            #+#    #+#              #
#    Updated: 2021/10/18 16:22:19 by rahmed           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	../rendu/ft_atoi.c \
			../rendu/ft_bzero.c \
			../rendu/ft_calloc.c \
			../rendu/ft_isalnum.c \
			../rendu/ft_isalpha.c \
			../rendu/ft_isascii.c \
			../rendu/ft_isdigit.c \
			../rendu/ft_isprint.c \
			../rendu/ft_itoa.c \
			../rendu/ft_memchr.c \
			../rendu/ft_memcmp.c \
			../rendu/ft_memcpy.c \
			../rendu/ft_memmove.c \
			../rendu/ft_memset.c \
			../rendu/ft_putchar_fd.c \
			../rendu/ft_putendl_fd.c \
			../rendu/ft_putnbr_fd.c \
			../rendu/ft_putstr_fd.c \
			../rendu/ft_split.c \
			../rendu/ft_strchr.c \
			../rendu/ft_strdup.c \
			../rendu/ft_striteri.c \
			../rendu/ft_strjoin.c \
			../rendu/ft_strlcat.c \
			../rendu/ft_strlcpy.c \
			../rendu/ft_strlen.c \
			../rendu/ft_strmapi.c \
			../rendu/ft_strncmp.c \
			../rendu/ft_strnstr.c \
			../rendu/ft_strrchr.c \
			../rendu/ft_strtrim.c \
			../rendu/ft_substr.c \
			../rendu/ft_tolower.c \
			../rendu/ft_toupper.c
SRCSB	=	../rendu/ft_lstadd_back.c \
			../rendu/ft_lstadd_front.c \
			../rendu/ft_lstclear.c \
			../rendu/ft_lstdelone.c \
			../rendu/ft_lstiter.c \
			../rendu/ft_lstlast.c \
			../rendu/ft_lstmap.c \
			../rendu/ft_lstnew.c \
			../rendu/ft_lstsize.c \

OBJS	=	${SRCS:.c=.o}
OBJSB	=	${SRCSB:.c=.o}

HEADER	=	.
CC		=	gcc
MAKE	=	-make
RM		=	rm -f
AR		=	ar rcs
CFLAGS	=	-Wall -Wextra -Werror
LDFLAGS	=	-L.
LDLIBS	=	-lft
TARGET	=	a.out

%.o:		%.c
			${CC} -c ${CFLAGS} -o $@ $< -I${HEADER}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

all:		${NAME}

bonus :		${NAME} ${OBJSB}
			${AR} ${NAME} ${OBJSB}

clean:
			${RM} -f ${OBJS}
			${RM} -f ${OBJSB}

fclean:		clean
			${RM} ${NAME} ${bonus}

re:			fclean all

.PHONY:		all bonus clean fclean re

############### PARTIE TEST ###############
test :		compile norm cleaning

compile :
			${MAKE} re
			${MAKE} bonus
			@echo "\n~~~~~~~~~~COMPILATION~~~~~~~~~~"
			${CC} ${CFLAGS} ${SRCS} ${SRCSB} main.c ${LDFLAGS} ${LDLIBS}
			@echo "\n~~~~~~~~~~   TEST    ~~~~~~~~~~"
			./${TARGET} #| cat -e

norm :
			@echo "\n~~~~~~~~~~CHECK NORM ~~~~~~~~~~"
			norminette ../rendu/*.c -R CheckForbiddenSourceHeader
			norminette ../rendu/*.h -R CheckDefine

cleaning :
			@echo "\n~~~~~~~~~~ CLEANING  ~~~~~~~~~~"
			${RM} ${TARGET}
			${RM} ${OBJS}
			${RM} ${OBJSB}
			${RM} ${NAME}
			${RM} .DS_STORE
###########################################
