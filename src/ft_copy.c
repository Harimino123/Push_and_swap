/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:33:30 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/14 13:29:49 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**free_tmp(char **tmp, int i)
{
	while (i-- > 0)
		free(tmp[i]);
	free(tmp);
	return (NULL);
}

static int	space(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}

char	**copy_input(int ac, char **av)
{
	char	*tmp;
	char	**tmp2;
	int		i;

	i = 1;
	while (i <= ac - 1)
	{
		if (!space(av[i]))
		{
			if (tmp)
				free(tmp);
			return (NULL);
		}
		if (i == 1)
			tmp = ft_strdup(av[1]);
		else
		{
			tmp = ft_strjoin(tmp, " ");
			tmp = ft_strjoin(tmp, av[i]);
		}
		i++;
	}
	tmp2 = ft_split(tmp, ' ');
	free(tmp);
	return (tmp2);
}
