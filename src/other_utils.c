/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 22:36:34 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/13 22:36:34 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int first_indice(t_list_node **list)
{
    return ((*list)->index);
}

int second_indice(t_list_node **list)
{
    if (*list == NULL || (*list)->next == NULL)
        return (-1);
    return ((*list)->next->index);
}


int check_f_s(t_list_node **stack_b, int j)
{
    if (list_size(*stack_b) < 2)
        return (0);
    if (first_indice(stack_b) < j && second_indice(stack_b) >= j)
        return (1);
    return (0);
}

int	ft_printerror(char *str)
{
    write(2, str, ft_strlen(str));
	return (0);
}

int ft_is_space(int c)
{
    return (c == ' ' || c == '\t' || c == '\v' || c == '\f' || c == '\n');
}