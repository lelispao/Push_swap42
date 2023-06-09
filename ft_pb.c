/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:13:26 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/09 12:10:33 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *a, t_stack *b)
{
	if (!b || !a)
        return;
	a->stack->next = b->stack;
	a->size++;
	b->stack->prev =  b->stack;
	b->stack = b->stack->next;
	b->size--;
}