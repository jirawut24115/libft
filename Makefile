# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchompoo <jchompoo@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 22:04:52 by jchompoo          #+#    #+#              #
#    Updated: 2022/03/29 18:34:28 by jchompoo         ###   ########.fr        #
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
