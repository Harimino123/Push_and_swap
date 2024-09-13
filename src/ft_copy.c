/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:33:30 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/13 14:49:28 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char    **free_tmp(char **tmp, int i)
{
    while (i-- > 0)
        free(tmp[i]);
    free(tmp);
    return (NULL);
}


char **copy_input(char **av)
{
    char    **tmp;
    int     ac;
    int     i;

    if (ft_strlen(av[1]) > 1 && ft_strchr(av[1], ' '))
        tmp = ft_split(av[1], ' ');
    else
    {
        ac = 0;
        while (av[ac])
            ac++;
        tmp = (char **)malloc(sizeof(char *) * (ac + 1));
        if (!tmp)
            return (NULL);
        i = 1;
        while (i < ac)
        {
            tmp[i - 1] = ft_strdup(av[i]);
            if (!tmp[i - 1])
                return (free_tmp(tmp, i )); 
            i++;
        }
        tmp[ac - 1] = NULL;
    }
    return (tmp);
}
