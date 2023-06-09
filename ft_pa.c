/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:13:21 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/09 12:09:50 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	stack_pop(t_stack *a)
// {
// 	t_stack	*temp;

// 	if (!a || !a->stack)
//         return;
// 	temp->stack = a->stack;
// 	a->stack = a->stack->next;
// 	free(temp);
// }
void	pa(t_stack *a, t_stack *b)
{
	if (!b || !a)
        return;
	b->stack->next = a->stack;
	b->size++;
	a->stack->prev =  a->stack;
	a->stack = a->stack->next;
	a->size--;
}