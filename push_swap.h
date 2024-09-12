/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:20:38 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/12 12:21:23 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "Libft/libft.h"
#include <unistd.h>
#include <limits.h> 


typedef struct s_list_node
{
    int             number;
    int             index;
    struct s_list_node   *next;
}   t_list_node;

char **copy_input(char **av);
char    **free_tmp(char **tmp, int i);
int ft_check_error(char **tmp);
void free_array(char **arr);
int ft_check_order(char **str);
long int ft_atoi_long(const char *str);
t_list_node *build_stack(char **arr);
void sort_stack(t_list_node *stack_a, t_list_node *stack_b, int ac);

void insert_at_end(t_list_node **head, int data);
void print_list(t_list_node *head);
void free_list(t_list_node **list);

int	ft_printerror(char *str);

void ft_swap(t_list_node **head_ref);
void ft_reverse_rotate(t_list_node **head_ref);
void ft_rotate(t_list_node **head_ref);
void ft_push(t_list_node **src, t_list_node **dest);

void sa(t_list_node **list);
void sb(t_list_node **list);
void ss(t_list_node **list_a, t_list_node **list_b);
void ra(t_list_node **list);
void rb(t_list_node **list);
void rr(t_list_node **list_a, t_list_node **list_b);
void rra(t_list_node **list);
void rrb(t_list_node **list);
void rrr(t_list_node **list_a, t_list_node **list_b);
void pa(t_list_node **src, t_list_node **dest);
void pb(t_list_node **src, t_list_node **dest);

void sort_three_numbers(t_list_node **list);


#endif