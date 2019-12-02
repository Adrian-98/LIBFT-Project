# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 17:26:05 by amunoz-p          #+#    #+#              #
#    Updated: 2019/11/12 18:20:47 by amunoz-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		= 	ft_strlen.c ft_memset.c ft_bzero.c ft_isalnum.c ft_isalpha.c\
ft_isdigit.c ft_isprint.c ft_memcpy.c ft_toupper.c ft_tolower.c ft_memccpy.c\
ft_memmove.c ft_memchr.c ft_memcmp.c ft_strncmp.c ft_strrchr.c ft_strlcpy.c\
ft_strlcat.c ft_atoi.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c\
ft_strjoin.c ft_strtrim.c ft_split.c ft_putnbr_fd.c ft_strmapi.c\
ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
ft_putnbr_fd.c ft_strmapi.c  ft_strchr.c ft_isascii.c\


BONS		=	ft_lstmap_bonus.c ft_lstiter_bonus.c ft_lstclear_bonus.c\
ft_lstdelone_bonus.c ft_lstadd_back_bonus.c ft_lstsize_bonus.c\
ft_lstlast_bonus.c ft_lstadd_front_bonus.c ft_lstnew_bonus.c\

GCC			=	@gcc -Wall -Wextra -Werror

OBJS		=	$(SRCS:.c=.o)

BONSOBJ		=	$(BONS:.c=.o)

INCLUDES	=	./

all: $(NAME)

$(NAME):	$(SRCS) libft.h
		$(GCC) -I$(INCLUDES) -c $(SRCS)
		-@ar rc $(NAME) $(OBJS)
		-@ranlib $(NAME)
bonus:		$(BONS) $(SRCS) libft.h
		$(GCC) -I$(INCLUDES) -c $(BONS)	$(SRCS)
		-@ar rc $(NAME) $(BONSOBJ) $(OBJS)
		-@ranlib $(NAME)
clean:  
			-@$(RM) $(OBJS)	$(BONSOBJ)
fclean:     clean
			-@$(RM) $(NAME)
re:			fclean all

.PHONY:		all clean fclean re bonus