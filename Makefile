# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/23 12:41:26 by hrasolof          #+#    #+#              #
#    Updated: 2024/09/15 10:03:19 by hrasolof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS_C = -Wall -Werror -Wextra -g

RM = rm -rf

SRCS = 	main.c \
		src/ft_copy.c \
		src/ft_check_error.c \
		src/ft_init_node.c \
		src/node_setting.c \
		src/move_set.c \
		src/move.c \
		src/move2.c \
		src/utils.c \
		src/other_utils.c \
		src/sort_stack.c \
		src/sort_utils.c \
		src/sort_big.c

LIBFT_PATH = Libft

LIBFT = $(LIBFT_PATH)/libft.a

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS) $(LIBFT)
	@echo "Compiling $(NAME)..."
	cc $(FLAGS_C) $(SRCS) $(LIBFT) -o $(NAME)

all: $(NAME)

$(LIBFT) :
		@make -C $(LIBFT_PATH)

clean:
	$(RM) $(OBJS)
	@make clean -C $(LIBFT_PATH)

fclean: clean
	$(RM) $(NAME)
	@make fclean -C $(LIBFT_PATH)

re: fclean all
