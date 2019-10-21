# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srobert- <srobert-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/06 15:47:53 by david             #+#    #+#              #
#    Updated: 2019/04/11 18:57:01 by srobert-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean fclean re make all

FILENAMES = main.c
FILENAMES += analyzer.c figure_catcher.c filler.c
FILENAMES += list.c funcstore.c print.c first_check.c
FILENAMES += checkers1.c checkers2.c checkers3.c checkers4.c
FILENAMES += fillers1.c fillers2.c fillers3.c fillers4.c kostils_4_filler.c
NAME = fillit

SRCS	=$(addprefix srcs/, $(FILENAMES))
OBJS	=$(addprefix build/, $(FILENAMES:.c=.o))

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g
CFLAGS	+= -I includes/
LFLAGS	= -L ./libft/ -lft

all: $(NAME)

$(NAME):$(OBJS) | lib
	@$(CC) $(CFLAGS) -o $(NAME) $(LFLAGS) $(OBJS)

build/%.o: srcs/%.c | build
	@$(CC) $(CFLAGS) -o $@ -c $^

re: fclean all

lib:
	@make -C ./libft
	@make clean -C ./libft

clean:
	@rm -rf build/

fclean: clean
	@make fclean -C ./libft
	@rm -f $(NAME)

build:
	@mkdir build/