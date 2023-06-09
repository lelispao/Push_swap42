/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:08:48 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/04 15:05:53 by lkioukou         ###   ########.fr       */
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

