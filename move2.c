/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:41:14 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/13 16:47:43 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list_node **b)
{
	t_list_node	*tmp;
	t_list_node	*last;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = NULL;
	last = *b;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = tmp;
}

void	ra(t_list_node **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_list_node **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_list_node **a, t_list_node **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}

static void	reverse_rotate(t_list_node **a)
{
	t_list_node	*last;
	t_list_node	*prev_last;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	last = *a;
	prev_last = NULL;
	while (last->next != NULL)
	{
		prev_last = last;
		last = last->next;
	}
	last->next = *a;
	*a = last;
	prev_last->next = NULL;
}

void	rrb(t_list_node **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rra(t_list_node **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrr(t_list_node **a, t_list_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}

static void	swap(t_list_node **a)
{
	t_list_node	*tmp;

	if (!(a) || !((*a)->next))
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
}

void	sa(t_list_node **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_list_node **b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_list_node **a, t_list_node **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}

void	pa(t_list_node **a, t_list_node **b)
{
	t_list_node	*tmp;

	if (*a == NULL)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_list_node **a, t_list_node **b)
{
	t_list_node	*tmp;

	if (*a == NULL)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	write(1, "pb\n", 3);
}

t_list_node	*ft_lstlast(t_list_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}