/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:53:51 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/12 13:57:11 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void find_small(t_list_node **stack)
{
    t_list_node *current;

    current = *stack;
    while (current->index != 1)
    {
        ra(stack);
        current = *stack;
    }
}

void find_small2(t_list_node **stack)
{
    t_list_node *current;

    current = *stack;
    while (current->index != 2)
    {
        ra(stack);
        current = *stack;
    }
}
