/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:09:03 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/15 13:46:13 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	classic_op(t_stack *a)
{
	ra(*a);
	sa(a);
	rra(a);
}

void	firstsmall(t_stack *a, int min, int max)
{
	rra(a);
	if (min == 1)
		sa(a);
	if (min == 3)
		rra(a);
	if (min == 4 && max == 1)
	{
		sa(a);
		ra(*a);
	}
}

void	secondsmall(t_stack *a, int min, int max)
{
	ra(*a);
	if (min == 4)
	{
		sa(a);
		ra(*a);
		ra(*a);
	}
	if (min == 3)
	{
		ra(*a);
		sa(a);
		ra(*a);
	}
	if (max == 3 && min == 2)
	{
		sa(a);
		ra(*a);
	}
}
