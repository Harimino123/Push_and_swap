/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:20:40 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/14 14:35:52 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list_node	*stack_a;
	t_list_node	*stack_b;
	char		**tmp;

	if (ac < 2)
		return (0);
	tmp = copy_input(ac, av);
	if (!tmp)
		return (ft_printerror("Error\n"));
	stack_a = NULL;
	stack_b = NULL;
	if (ft_check_error(tmp) == 0)
	{
		free_array(tmp);
		return (ft_printerror("Error\n"));
	}
	if (ft_check_order(tmp) == 1)
	{
		free_array(tmp);
		return (0);
	}
	build_stack(tmp, &stack_a);
	sort_stack(&stack_a, &stack_b);
	free_list(&stack_a);
	free_array(tmp);
}
