/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:20:10 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/22 11:25:58 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *nptr)
{
	int	i;
	int	nm;
	int	sign;

	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t'
		|| nptr[i] == '\n' || nptr[i] == '\r'
		|| nptr[i] == '\v' || nptr[i] == '\f')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	nm = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nm = nm * 10 + (nptr[i] - '0');
		i++;
	}
	return (nm * sign);
}

int	stringlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	max_or_min(t_stack *a, int max, int min)
{
	while (max != 1 && min != 1)
	{
		ra(*a);
		max = indexfinder(*a);
		min = minfinder(*a);
	}
}
