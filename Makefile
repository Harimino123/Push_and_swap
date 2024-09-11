# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/23 12:41:26 by hrasolof          #+#    #+#              #
#    Updated: 2024/09/11 23:54:40 by hrasolof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS_C = -Wall -Werror -Wextra

RM = rm -rf

SRCS = main.c \
		ft_copy.c \
		ft_error_check.c \
		ft_init_node.c \
		node_setting.c \
		# utils/move.c \
		# utils/node_setting.c \
		# utils/other_utils.c \
		# utils/utils.c

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