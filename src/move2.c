/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 22:28:15 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/13 22:28:15 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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