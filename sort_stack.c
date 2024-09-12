/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:01:30 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/12 12:32:51 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_two(t_list_node **list)
{
    int x1;
    int x2;
    
    x1 = (*list)->index;
    x2 = (*list)->next->index;
    if (x1 > x2)
        sa(list);
}

void sort_three(t_list_node **list)
{
    int x1;
    int x2;
    int x3;

    x1 = (*list)->index;
    x2 = (*list)->next->index;
    x3 = (*list)->next->next->index;
    if (x1 < x2 && x2 > x3 && x1 < x3)
    {
        sa(list);
        ra(list);
    }
    else if (x1 > x2 && x2 < x3 && x1 < x3)
        sa(list);
    else if (x1 < x2 && x2 > x3 && x1 > x3)
        rra(list);
    else if (x1 > x2 && x2 < x3 && x1 > x3)
        ra(list);
    else if (x1 > x2 && x2 > x3 && x1 > x3)
    {
        sa(list);
        rra(list);
    }
}

void sort_stack(t_list_node *stack_a, t_list_node *stack_b, int ac)
{
    int ac_count;

    ac_count = ac - 1;
    if (ac_count == 2)
        sort_two(&stack_a);
    else if (ac_count == 3)
        sort_three(&stack_a);
    print_list(stack_a);
}