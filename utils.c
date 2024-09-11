/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 23:00:52 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/11 23:00:52 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int ft_is_space(int c)
{
    return (c == ' ' || c == '\t' || c == '\v' || c == '\f' || c == '\n');
}

int ft_atoi_long(const char *str)
{
    long int result;
    int sign;

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
    return (int)(result * sign);
}
