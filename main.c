/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:20:40 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/11 22:20:40 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    print_tmp(char **tmp)
{
    int i = 0;

    while (tmp[i])
    {
        printf("tmp[%d]: %s\n", i, tmp[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    t_list_node  *stack_a;
    t_list_node  *stack_b;
    char    **tmp;

    if (ac < 2)
        return (0);
    tmp = copy_input(av);
    if (!tmp)
    {
        write(2, "Error\n", 6);
        return (1);
    }
    stack_a = NULL;
    stack_b = NULL;
    if (ft_check_error(tmp) == 0)
    {
        free_array(tmp);
        return (0);
    }
    stack_a = build_stack(tmp);

}
