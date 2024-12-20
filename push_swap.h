/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:20:38 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/14 13:24:40 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include <limits.h>
# include <unistd.h>

typedef struct s_list_node
{
	int					number;
	int					index;
	struct s_list_node	*next;
}						t_list_node;

char					**copy_input(int ac, char **av);
char					**free_tmp(char **tmp, int i);
int						ft_check_error(char **tmp);
void					free_array(char **arr);
int						ft_check_order(char **str);
long int				ft_atoi_long(const char *str);

void					insert_at_end(t_list_node **head, int data);
int						list_size(t_list_node *list);
void					free_list(t_list_node **list);

int						ft_is_space(int c);
int						ft_printerror(char *str);

void					ft_swap(t_list_node **head_ref);
void					ft_reverse_rotate(t_list_node **head_ref);
void					ft_rotate(t_list_node **head_ref);
void					ft_push(t_list_node **src, t_list_node **dest);

void					sa(t_list_node **a);
void					sb(t_list_node **b);
void					ss(t_list_node **a, t_list_node **b);
void					ra(t_list_node **a);
void					rb(t_list_node **b);
void					rr(t_list_node **a, t_list_node **b);
void					rra(t_list_node **a);
void					rrb(t_list_node **b);
void					rrr(t_list_node **a, t_list_node **b);
void					pa(t_list_node **a, t_list_node **b);
void					pb(t_list_node **a, t_list_node **b);

void					build_stack(char **arr, t_list_node **stack_a);
void					sort_stack(t_list_node **stack_a,
							t_list_node **stack_b);
void					find_small(t_list_node **stack);
void					find_small2(t_list_node **stack);
void					sort_three(t_list_node **list);
void					sort_big(t_list_node **stack_a, t_list_node **stack_b);

int						first_indice(t_list_node **list);
int						second_indice(t_list_node **list);
int						check_f_s(t_list_node **stack_b, int j);
int						check_if_indice(t_list_node *stack_a, int min, int max);
int						position_in_list(t_list_node *stack_b, int nbr);

#endif