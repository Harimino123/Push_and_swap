/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:20:38 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/11 22:20:38 by hrasolof         ###   ########.fr       */
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
    struct s_list   *next;
}   t_list_node;

char **copy_input(char **av);
char    **free_tmp(char **tmp, int i);
int ft_check_error(char **tmp);
void free_array(char **arr);
int ft_atoi_long(const char *str);
t_list_node *build_stack(char **arr);

void insert_at_end(t_list_node **head, int data);

#endif