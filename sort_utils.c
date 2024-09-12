/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:53:51 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/12 19:24:28 by hrasolof         ###   ########.fr       */
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

int check_if_indice(t_list_node *stack_a, int min, int max)
{
    int i;

    i = 0;
    while (stack_a)
    {
        if (stack_a->index >= min && stack_a->index <= max)
            i++;
        stack_a = stack_a->next;
    }
    return (i);
}

int position_in_list(t_list_node *stack_b, int nbr)
{
    int i;

    i = 0;
    while (stack_b)
    {
        if ((stack_b)->index == nbr)
            return (i);
        i++;
        stack_b = stack_b->next;
    }
    return (0);
}
