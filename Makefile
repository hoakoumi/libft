# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 21:25:20 by hoakoumi          #+#    #+#              #
#    Updated: 2022/11/09 20:52:53 by hoakoumi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRCS =  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c\
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_toupper.c\
		ft_strlcat.c ft_tolower.c ft_strchr.c ft_atoi.c\
		ft_calloc.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
		ft_memcmp.c ft_substr.c ft_strdup.c ft_strnstr.c\
		ft_strjoin.c ft_putchar_fd.c ft_strtrim.c\
		ft_strmapi.c ft_itoa.c ft_putstr_fd.c ft_putendl_fd.c\
		ft_striteri.c ft_putnbr_fd.c ft_split.c

OBJ = ${SRCS:%.c=%.o}

CFLAGS = -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${OBJ}
	ar -rc ${NAME} ${OBJ}

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all 

