/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:58:00 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/11 22:58:00 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int  is_number(const char *str)
{
    int i ;

    i = 0;
    if (*str == '+' || *str == '-')
        str++;
    if (*str == '\0')
        return (0);
    while (*str)
    {
        if (!ft_isdigit(*str))
            return (0);
        str++;
    }
    return (1);
}

static int  has_duplicates(char **arr)
{
    int i;
    int j;

    i = 0;
    while (arr[i])
    {
        j = i + 1;
        while (arr[j])
        {
            if (ft_strcmp(arr[i], arr[j]) == 0)
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

static int  check_range(const char *str)
{
    long num;

    num = ft_atoi_long(str);
    if (num > INT_MAX || num < INT_MIN)
        return (0);
    return (1);
}

int ft_check_error(char **tmp)
{
    int i;

    i = 0;
    while (tmp[i])
    {
        if (!is_number(tmp[i]) || !check_range(tmp[i]))
            return (0);
        i++;
    }
    if (!has_duplicates(tmp))
        return (0);
    return (1);
}

