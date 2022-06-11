# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecristin <ecristin@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/11 12:09:15 by ecristin          #+#    #+#              #
#    Updated: 2022/06/11 13:49:16 by ecristin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libtf.a
  
  SRCS    =	ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strnstr.c \
			ft_calloc.c \
  
   
  OBJS    = $(SRCS:.c=.o)
  
  OBJS_BONUS = ${SRC_BONUS:%.c=%.o}

  CC  = gcc

  RM  =   rm -f
  
  CFLAGS  = -Wall -Wextra -Werror
  
  .c.o:
          $(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
  
 $(NAME):    $(OBJS)
 			ar rcs $(NAME) $(OBJS)
  
  all: $(NAME)

  bonus: ${OBJS} ${OBJS_BONUS}
	ar rc ${NAME} ${OBJS} ${OBJS_BONUS}
	ranlib ${NAME}
  
  clean:
      $(RM) $(OBJS)
  
  fclean: clean
      $(RM) $(NAME)
  
  re: fclean all
  
  .PHONY: all, clean, fclean, re

teste:
	$(CC) $(CFLAGS) test.c $(SRCS)
