# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 10:27:39 by lkioukou          #+#    #+#              #
#    Updated: 2023/05/30 17:06:01 by lkioukou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all fclean clean re #make

#BONUS = 

NAME = push_swap.a

SRC = 

OBJ = $(SRC:.c=.o)

#bonusOBJ = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	cc -Werror -Wextra -Wall -c $< -o $@	

#bonus:$(bonusOBJ)
#	ar rcs $(NAME) $(bonusOBJ)

fclean:clean
	rm -f $(NAME)
clean:
	rm -f *.o
	
re: fclean all
