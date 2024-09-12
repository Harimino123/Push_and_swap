/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:05:44 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/12 13:38:08 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap(t_list_node **head_ref)
{
    t_list_node *first;
    t_list_node *second;

    if (*head_ref == NULL || (*head_ref)->next == NULL)
        return ;
    first = *head_ref;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *head_ref = second;
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
    if (second_last != NULL)
    {
        second_last->next = NULL;
        find_last->next = *head_ref;
        *head_ref = find_last;
    }
}

void ft_rotate(t_list_node **head_ref)
{
    t_list_node *first_list_node;
    t_list_node *last_list_node;

    if (*head_ref == NULL || (*head_ref)->next == NULL)
        return ;
    first_list_node = *head_ref;
    last_list_node = *head_ref;
    *head_ref = first_list_node->next;
    while (last_list_node->next != NULL)
        last_list_node = last_list_node->next;
    last_list_node->next = first_list_node;
    first_list_node->next = NULL;
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


