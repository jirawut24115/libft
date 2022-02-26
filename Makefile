# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 22:04:52 by jchompoo          #+#    #+#              #
#    Updated: 2022/02/26 21:12:03 by jchompoo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= *.c

OBJS	= $(SRCS:%.c=%.o)

FLAGS	= -Wall -Wextra -Werror

$(NAME):
	@gcc $(FLAGS) -c $(SRCS) -I ./
	@ar rc $(NAME) $(OBJS)

all: $(NAME) clean

clean:
	@rm -rf $(OBJS)

fclean:
	@rm -rf $(NAME)

re: fclean all
