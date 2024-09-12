/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:05:37 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/12 12:06:10 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_list_node **list)
{
    ft_swap(list);
    printf("sa\n");
}

void sb(t_list_node **list)
{
    ft_swap(list);
    printf("sb\n");
}

void ss(t_list_node **list_a, t_list_node **list_b)
{
    ft_swap(list_a);
    ft_swap(list_b);
    printf("ss\n");
}

void ra(t_list_node **list)
{
    ft_rotate(list);
    printf("ra\n");
}

void rb(t_list_node **list)
{
    ft_rotate(list);
    printf("rrb\n");
}

void rr(t_list_node **list_a, t_list_node **list_b)
{
    ft_rotate(list_a);
    ft_rotate(list_b);
    printf("rrr\n");
}

void rra(t_list_node **list)
{
    ft_reverse_rotate(list);
    printf("rra\n");
}

void rrb(t_list_node **list)
{
    ft_reverse_rotate(list);
    printf("rb\n");
}

void rrr(t_list_node **list_a, t_list_node **list_b)
{
    ft_reverse_rotate(list_a);
    ft_reverse_rotate(list_b);
    printf("rr\n");
}

void pa(t_list_node **src, t_list_node **dest)
{
    ft_push(src, dest);
    printf("pa\n");
}

void pb(t_list_node **src, t_list_node **dest)
{
    ft_push(src, dest);
    printf("pb\n");
}