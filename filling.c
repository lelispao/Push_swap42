/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:23:53 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/09 14:03:07 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printlist(t_stack a)
{
	if (a.size == 0)
		return ;
	while (a.size)
	{
		printf(" list:%d\n", a.stack->value);
		a.stack = a.stack->next;
		a.size--;
	}
	printf("\n");
}

void	stack_creation(t_stack *stack, int argc, char **argv)
{
	t_node	*temp;
	int		i;

	i = 0;
	stack->size = 0;
	while (++i < argc)
	{
		temp = malloc(sizeof(t_node));
		if (temp == NULL)
			return ;
		temp->next = NULL;
		temp->prev = NULL;
		temp->value = ft_atoi(argv[argc - i]);
		if (stack->size == 0)
			stack->stack = temp;
		else
		{
			temp->next = stack->stack;
			stack->stack->prev = temp;
			stack->stack = temp;
		}
		stack->size += 1;
	}
}
