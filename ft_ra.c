/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:13:28 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/08 13:22:50 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_stack *last_node(t_stack stack)
// {
// 	while (stack.next)
// 		stack = stack.next;
// 	return (stack);
// }

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