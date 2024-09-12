# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/23 12:41:26 by hrasolof          #+#    #+#              #
#    Updated: 2024/09/12 13:22:02 by hrasolof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS_C = -Wall -Werror -Wextra

RM = rm -rf

SRCS = main.c \
		ft_copy.c \
		ft_check_error.c \
		ft_init_node.c \
		node_setting.c \
		move_set.c \
		move.c \
		utils.c \
		sort_stack.c \
		sort_utils.c

LIBFT_PATH = Libft

LIBFT = $(LIBFT_PATH)/libft.a

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS) $(LIBFT)
	@echo "Compiling $(NAME)..."
	cc $(FLAGS_C) $(OBJS) $(LIBFT) -o $(NAME)

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