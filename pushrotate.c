/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:13:21 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/09 14:18:16 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	if (!b || !a)
		return ;
	b->stack->next = a->stack;
	b->size++;
	a->stack->prev = a->stack;
	a->stack = a->stack->next;
	a->size--;
}

void	pb(t_stack *a, t_stack *b)
{
	if (!b || !a)
		return ;
	a->stack->next = b->stack;
	a->size++;
	b->stack->prev = b->stack;
	b->stack = b->stack->next;
	b->size--;
}

void	ra(t_stack stack_a)
{
	int	temp;

	if (!stack_a.size)
		return ;
	temp = stack_a.stack->value;
	while (stack_a.stack->next)
	{
		stack_a.stack->value = stack_a.stack->next->value;
		stack_a.stack = stack_a.stack->next;
	}
	stack_a.stack->value = temp;
}

void	rb(t_stack stack_b)
{
	int	temp;

	if (!stack_b.size)
		return ;
	temp = stack_b.stack->value;
	while (stack_b.stack->next)
	{
		stack_b.stack->value = stack_b.stack->next->value;
		stack_b.stack = stack_b.stack->next;
	}
	stack_b.stack->value = temp;
}

void	rr(t_stack stack_a, t_stack stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
