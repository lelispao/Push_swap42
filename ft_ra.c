/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:13:28 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/02 15:07:48 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_stack *last_node(t_stack stack)
// {
// 	while (stack.next)
// 		stack = stack.next;
// 	return (stack);
// }

void	ra(t_stack *stack_a)
{
	int	temp;

	if (stack_a == NULL || stack_a->next == NULL)
		return ;
	temp = stack_a->value;
	while (stack_a->next)
	{
		stack_a->value = stack_a->next->value;
		stack_a = stack_a->next;
	}
	stack_a->value = temp;
}