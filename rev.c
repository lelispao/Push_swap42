/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:13:37 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/14 14:42:55 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a)
{
	t_node	*current;
	t_node	*temp;

	if (!a || !a->stack || !a->stack->next)
		return ;
	current = a->stack;
	while (current->next->next)
		current = current->next;
	temp = current->next;
	current->next = NULL;
	temp->next = a->stack;
	a->stack = temp;
}

void	rrb(t_stack *b)
{
	t_node	*current;
	t_node	*temp;

	if (!b->stack || !b->stack->next || !b)
		return ;
	current = b->stack;
	while (current->next->next)
		current = current->next;
	temp = current->next;
	current->next = NULL;
	temp->next = b->stack;
	b->stack = temp;
}

void	rrr(t_stack a, t_stack b)
{
	rra(&a);
	rrb(&b);
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