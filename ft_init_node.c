/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 23:37:40 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/12 11:23:34 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list_node	*get_next_min(t_list_node **stack)
{
	t_list_node	*head;
	t_list_node	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!has_min || head->number < min->number))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void i_stack(t_list_node **stack)
{
    t_list_node	*head;
	int		index;

	index = 1;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}

t_list_node *build_stack(char **arr)
{
    t_list_node *stack; // Initialize the stack as empty
    int i;
    int number;

    stack = NULL; 
    i = 0;
    while (arr[i])
    {
        number = ft_atoi(arr[i]);
        insert_at_end(&stack, number);
        i++;
    }
    i_stack(&stack);
    return (stack);
}

