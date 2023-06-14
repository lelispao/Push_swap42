/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:10:12 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/14 17:15:53 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	indexfinder(t_stack a)
{
	int			i;
	int			temp;
	int			max;
	t_node		*c;

	max = 0;
	temp = 1;
	i = 0;
	c = a.stack;
	while (c)
	{
		if (c->value >= max)
		{
			max = c->value;
			i = temp;
		}
		temp++;
		c = c->next;
	}
	return (i);
}

int	minfinder(t_stack a)
{
	int			i;
	int			temp;
	int			min;
	t_node		*c;

	min = a.stack->value;
	temp = 1;
	i = 0;
	c = a.stack;
	while (c)
	{
		if (c->value <= min)
		{
			min = c->value;
			i = temp;
		}
		temp++;
		c = c->next;
	}
	return (i);
}

int	issorted(t_stack a)
{
	if (!a.stack || !a.stack->next)
		return (0);
	while (a.stack->next)
	{
		if (a.stack->value < a.stack->next->value)
			a.stack = a.stack->next;
		else
			return (0);
	}
	return (1);
}

void	minisort(t_stack *a)
{
	int	max;

	if (issorted(*a) == 1)
		return ;
	max = indexfinder(*a);
	if (max == 1)
		ra (*a);
	else if (max == 2)
		rra(a);
	if (issorted(*a) == 0)
		sa(a);
}

void	smallsort(t_stack *a)
{
	int	max;
	int	min;

	max = indexfinder(*a);
	printf("max:%i\n",max);
	min = minfinder(*a);
	printf("min:%i\n",min);
	if (max == 3 && min == 1 || max == 3 && min == 4)
	{
		rra(a);
		if (min == 1)
			sa(a);
		if (issorted(*a) == 0)
			classic_op(a);
	}
	if (max == 3 && min == 2)
	{
		ra(*a);
		sa(a);
		ra(*a);
		if (issorted(*a) == 0)
			classic_op(a);
	}
	if (max == 4 && min == 1)
	{
		if (issorted(*a) == 0)
			classic_op(a);
	}
	if (max == 4 && min == 2)
	{
		sa(a);
		if (issorted(*a) == 0)
			classic_op(a);
	}
	if (max == 4 && min == 3)
	{
		///  push b ra push a is 1 less****
		ra(*a);
		ra(*a);
		sa(a);
		ra(*a);
		if (issorted(*a) == 0)
			classic_op(a);
	}
	if (max == 2 && min == 1)
	{
		sa(a);
		ra(*a);
		if (issorted(*a) == 0)
			classic_op(a);
	}
	if (max == 2 && min == 3)
	{
		rra(a);
		rra(a);
		if (issorted(*a) == 0)
			classic_op(a);
	}
	if (max == 2 && min == 4)
	{
		ra(*a);
		sa(a);
		ra(*a);
		ra(*a);
		if (issorted(*a) == 0)
			classic_op(a);
	}
	if (max == 1 && min == 2)
	{
		ra(*a);
		if (issorted(*a) == 0)
			classic_op(a);
	}
	if (max == 1 && min == 3)
	{
		sa(a);
		rra(a);
		rra(a);
		if (issorted(*a) == 0)
			classic_op(a);
	}
	if (max == 1 && min == 4)
	{
		rra(a);
		sa(a);
		ra(*a);
		if (issorted(*a) == 0)
			classic_op(a);
	}
}

// midsort(a, b) mexrh10
// {
// }  
//
// d	2		
// d	4	
// d	3	
// d	5	
// d	6
// d
// d
// d

// d