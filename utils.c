/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 23:00:52 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/13 16:29:17 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int first_indice(t_list_node **list)
{
    return ((*list)->index);
}

int second_indice(t_list_node **list)
{   
    return ((*list)->next->index);
}

int check_f_s(t_list_node **stack_b, int j)
{
    if((first_indice(stack_b) < j && second_indice(stack_b) >= j))
        return (1);
    return (0);
}

void free_array(char **arr)
{
    int i;

    i = 0;
    if (arr)
    {
        while (arr[i])
        {
            free(arr[i]);
            i++;
        }
        free(arr);
    }
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

long int ft_atoi_long(const char *str)
{
    long int result;
    long int sign;

    result = 0;
    sign = 1;
    while (ft_is_space((unsigned char)*str))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str)
    {
        if (*str >= '0' || *str <= '9')
            return 0;
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result * sign);
}

int ft_check_order(char **str)
{
    int i;

    i = 1;
    while (str[i])
    {
        if (ft_atoi(str[i - 1]) > ft_atoi(str[i]))
            return (0);
        i++;
    }
    return (1);
}
