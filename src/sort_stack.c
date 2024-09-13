/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:01:30 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/13 12:58:19 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void sort_four(t_list_node **list_a, t_list_node **list_b)
{
    find_small(list_a);
    pb(list_a, list_b);
    sort_three(list_a);
    pa(list_b, list_a);
}

void sort_five(t_list_node **list_a, t_list_node **list_b)
{
    while (1)
    {
        if (list_size(*list_b) == 2)
            break ;
        if ((*list_a)->index == 1 || ((*list_a)->index == 2))
            pb(list_a, list_b);
        else
            ra(list_a);
    }
    if ((*list_b)->index < (*list_b)->next->index)
    {
        if ((*list_a)->index > (*list_a)->next->index)
            ss(list_a, list_b);
        else
            sb(list_b);
    }
    sort_three(list_a);
    pa(list_b, list_a);
    pa(list_b, list_a);   
}

void sort_stack(t_list_node **stack_a, t_list_node **stack_b, int ac)
{
    int ac_count;

    ac_count = ac - 1;
    if (ac_count == 2)
        sort_two(stack_a);
    else if (ac_count == 3)
        sort_three(stack_a);
    else if (ac_count == 4)
        sort_four(stack_a, stack_b);
    else if (ac_count == 5)
        sort_five(stack_a, stack_b);
    else
        sort_big(stack_a, stack_b);
}
