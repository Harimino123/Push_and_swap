/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:53:22 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/13 17:17:09 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_b_to_a(t_list_node **stack_b, t_list_node **stack_a)
{
    int i;

    while (*stack_b)
    {
        i = list_size(*stack_b);
        if ((*stack_b)->index == i)
            pa(stack_b, stack_a);
        else if (position_in_list((*stack_b), i) <= (list_size(*stack_b) / 2))
            rb(stack_b);    
        else
            rrb(stack_b);
    }
}

void push_a_to_b(t_list_node **stack_a, t_list_node **stack_b, int min, int max)
{
    int j;

    j = (min + max) / 2;
    while (check_if_indice(*stack_a, min, max))
    {
        if ((*stack_a)->index >= min && (*stack_a)->index <= max)
        {
            pb(stack_a, stack_b);
            if (list_size(*stack_b) >= 2 && check_f_s(stack_b, j))
            {
                if ((*stack_a) && first_indice(stack_a) > max)
                    rr(stack_a, stack_b);
                else
                    rb(stack_b);
            }   
        }
        else
            ra(stack_a);
    }
    
}

void sort_big(t_list_node **stack_a, t_list_node **stack_b)
{
    int maximum;
    int averrage;
    int minimum;

    maximum = list_size(*stack_a);
    if (maximum <= 100)
        {
            maximum = list_size(*stack_a);
            averrage = maximum / 4;
        }
    else
        averrage = 61;
    maximum = 0;
    while (*stack_a)
    {
        maximum = list_size(stack_a) / 4;
        minimum = maximum;
        maximum = averrage + minimum;
        push_a_to_b(stack_a, stack_b, minimum, maximum);
    }
    push_b_to_a(stack_b, stack_a);  
}
