/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:05:44 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/13 17:05:59 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_swap(t_list_node **head_ref)
{
    t_list_node *temp;

    if (head_ref == NULL || (*head_ref)->next == NULL)
        return ;
    temp = *head_ref;
    *head_ref = (*head_ref)->next;
    temp->next = (*head_ref)->next;
    (*head_ref)->next = temp;
}

void ft_reverse_rotate(t_list_node **head_ref)
{
    t_list_node *find_last;
    t_list_node *second_last;

    if (*head_ref == NULL || (*head_ref)->next == NULL)
        return ;
    find_last = *head_ref;
    second_last = NULL;
    while (find_last->next != NULL)
    {
        second_last = find_last;
        find_last = find_last->next;
    }
    find_last->next = *head_ref;
    *head_ref = find_last;
    second_last->next = NULL;
}

void ft_rotate(t_list_node **head_ref)
{
    t_list_node *first_list_node;
    t_list_node *last_list_node;

    if (*head_ref == NULL || (*head_ref)->next == NULL)
        return ;
    first_list_node = *head_ref;
    *head_ref = (*head_ref)->next;
    first_list_node->next = NULL;
    last_list_node = *head_ref;
    while (last_list_node->next != NULL)
        last_list_node = last_list_node->next;
    last_list_node->next = first_list_node;
}

void ft_push(t_list_node **src, t_list_node **dest)
{
    t_list_node *tmp;

    if (*src == NULL)
        return ;
    tmp = *src;
    *src = (*src)->next;
    tmp->next = *dest;
    *dest = tmp;
}


