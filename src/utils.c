/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 23:00:52 by hrasolof          #+#    #+#             */
/*   Updated: 2024/09/14 13:18:22 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_array(char **arr)
{
	int	i;

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

long int	ft_atoi_long(const char *str)
{
	long int	result;
	long int	sign;
	int			i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_is_space((unsigned char)str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

int	ft_check_order(char **str)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (ft_atoi(str[i - 1]) > ft_atoi(str[i]))
			return (0);
		i++;
	}
	return (1);
}
