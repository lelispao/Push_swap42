/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:13:21 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/15 13:54:35 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *source, t_stack *dest)
{
	t_node	*temp;

	temp = source->stack;
	source->stack = source->stack->next;
	temp->prev = NULL;
	if (source->stack)
		source->stack->prev = NULL;
	if (!dest->size)
	{
		dest->stack = temp;
		temp->next = NULL;
	}
	else
	{
		temp->next = dest->stack;
		temp->next->prev = temp;
		dest->stack = temp;
	}
	dest->size++;
	source->size--;
}

void	pb(t_stack *a, t_stack *b)
{
	push(a, b);
}

void	pa(t_stack *b, t_stack *a)
{
	push(b, a);
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
