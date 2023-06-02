/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:13:31 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/02 15:09:43 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stack *stack_b)
{
	int	temp;

	if (stack_b == NULL || stack_b->next == NULL)
		return ;
	temp = stack_b->value;
	while (stack_b->next)
	{
		stack_b->value = stack_b->next->value;
		stack_b = stack_b->next;
	}
	stack_b->value = temp;
}