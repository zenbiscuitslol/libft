# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/13 20:47:39 by pprejith          #+#    #+#              #
#    Updated: 2025/03/20 20:30:26 by pprejith         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror 
CC = cc

SRC			=	ft_isalnum.c ft_isprint.c ft_memcmp.c ft_isascii.c  \
				ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
				ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
				ft_strnstr.c ft_tolower.c ft_bzero.c ft_strjoin.c ft_itoa.c \
				ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
				ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_putchar_fd.c ft_memset.c  \
				ft_putstr_fd.c ft_strmapi.c ft_strtrim.c ft_striteri.c ft_split.c

SRCBONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
				ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ			=	$(SRC:.c=.o)
B_OBJ		=	$(SRCBONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(B_OBJ)
	ar rcs $(NAME) $(OBJ) $(B_OBJ)

%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(B_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all