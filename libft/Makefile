# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 14:37:38 by kemmeric          #+#    #+#              #
#    Updated: 2019/11/18 17:32:34 by kemmeric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: $(NAME)

$(NAME):
	@gcc -ggdb -Iincludes -c *.c
	@ar rc $(NAME) *.o
	@ranlib $(NAME)

clean:
	@rm -rf *.o*

fclean: clean
	@rm -rf $(NAME)

re: fclean all
