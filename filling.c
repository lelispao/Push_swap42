/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:23:53 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/28 16:30:39 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printlist(const t_stack *a, char stack_name)
{
	t_node	*current;

	current = a->stack;
	if (a->size == 0)
		return ;
	while (current)
	{
		printf("%c:%d\n", stack_name, current->value);
		current = current->next;
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
