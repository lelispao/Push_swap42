/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:13:31 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/08 13:24:21 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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