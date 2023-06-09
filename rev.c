/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:13:37 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/09 14:13:59 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack a)
{
	int	temp;

	if (!a.size)
		return ;
	temp = a.stack->value;
	while (a.stack->next)
	{
		a.stack->value = a.stack->next->value;
		a.stack = a.stack->next;
	}
	a.stack->value = temp;
}

void	rrb(t_stack b)
{
	int	temp;

	if (!b.size)
		return ;
	temp = b.stack->value;
	while (b.stack->next)
	{
		b.stack->value = b.stack->next->value;
		b.stack = b.stack->next;
	}
	b.stack->value = temp;
}

void	rrr(t_stack a, t_stack b)
{
	rra(a);
	rrb(b);
}

void	sa(t_stack *a)
{
	int	temp;

	if (!a->size)
		return ;
	temp = a->stack->next->value;
	a->stack->next->value = a->stack->value;
	a->stack->value = temp;
}

void	sb(t_stack *b)
{
	int	temp;

	if (!b->size)
		return ;
	temp = b->stack->next->value;
	b->stack->next->value = b->stack->value;
	b->stack->value = temp;
}