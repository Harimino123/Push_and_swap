/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:05:37 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/12 19:28:27 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_list_node **list)
{
    ft_swap(list);
    write(1, "sa\n", 3);
}

void sb(t_list_node **list)
{
    ft_swap(list);
    write(1, "sb\n", 3);
}

void ss(t_list_node **list_a, t_list_node **list_b)
{
    ft_swap(list_a);
    ft_swap(list_b);
    write(1, "ss\n", 3);
}

void ra(t_list_node **list)
{
    ft_rotate(list);
    write(1, "ra\n", 3);
}

void rb(t_list_node **list)
{
    ft_rotate(list);
    write(1, "rb\n", 4);
}
    
void rr(t_list_node **list_a, t_list_node **list_b)
{
    ft_rotate(list_a);
    ft_rotate(list_b);
    write(1, "rr\n", 4);
}

void rra(t_list_node **list)
{
    ft_reverse_rotate(list);
    write(1, "rra\n", 4);
}

void rrb(t_list_node **list)
{
    ft_reverse_rotate(list);
    write(1, "rrb\n", 4);
}

void rrr(t_list_node **list_a, t_list_node **list_b)
{
    ft_reverse_rotate(list_a);
    ft_reverse_rotate(list_b);
    write(1, "rrr\n", 3);
}

void pa(t_list_node **src, t_list_node **dest)
{
    ft_push(src, dest);
    write(1, "pa\n", 3);
}

void pb(t_list_node **src, t_list_node **dest)
    {
        ft_push(src, dest);
    write(1, "pb\n", 3);
}