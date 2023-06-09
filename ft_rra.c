/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:13:37 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/08 11:25:01 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node** stack_a)
{
	t_node		*temp;
	int		start;
	int		arch;

	if ((*stack_a)->next == NULL || (*stack_a) == NULL)
		return ;
	//printf("start: %i\n",stack_a->value);
	temp = reverse(*stack_a);

	
		temp->next = *stack_a;
		printf("temp val: %i\n", temp->value);
		printf("temp next val: %i\n", temp->next->value);

 	while ((*stack_a)->next->next->next)
	{

		(*stack_a) = (*stack_a)->next;
	}
		printf("stack val: %i\n", (*stack_a)->value);

	(*stack_a)->next = NULL;
}