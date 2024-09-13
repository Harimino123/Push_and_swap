/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:05:37 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/13 17:13:44 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list_node **a)
{
	ft_rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_list_node **b)
{
	ft_rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_list_node **a, t_list_node **b)
{
	ft_rotate(a);
	ft_rotate(b);
	write(1, "rr\n", 3);
}

void	rrb(t_list_node **b)
{
	ft_reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rra(t_list_node **a)
{
	ft_reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrr(t_list_node **a, t_list_node **b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	write(1, "rrr\n", 4);
}

void	sa(t_list_node **a)
{
	ft_swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_list_node **b)
{
	ft_swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_list_node **a, t_list_node **b)
{
	ft_swap(a);
	ft_swap(b);
	write(1, "ss\n", 3);
}

void pa(t_list_node **a, t_list_node **b)
{
    ft_push(a, b);
    write(1, "pa\n", 3);
}

void    pb(t_list_node **a, t_list_node **b)
{
    ft_push(a, b);
    write(1, "pb\n", 3);
}