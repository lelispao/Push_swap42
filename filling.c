/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:23:53 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/09 12:12:34 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void printList(t_stack a)
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
	int		mb;
	int		i;

	mb = 0;
	i = 1;
	stack->size = 0;
	while (i < argc)
	{
		temp = malloc(sizeof(t_node));
		if (temp == NULL)
			return ;
		temp->next = NULL;
		temp->prev = NULL;
		temp->value = ft_atoi(argv[argc - i]);
		if (stack->size == 0)
		{	
			stack->stack = temp; 
		}
		else
		{
			temp->next = stack->stack;
			stack->stack->prev = temp;
			stack->stack = temp;
		}
		stack->size += 1;
		i++;
	}
}

t_node	*reverse(t_node *stack)
{
	t_node *current;
	t_node	*temp;
	t_node	*last;
	int		value;

	current = stack;

	/*if (stac == NULL)
		return -1;
	temp = NULL;
	last = NULL;
	current = *stac;
	while (current->next)
	{
		temp = current;
		current = current->next;
	}
	last = current;
	value = temp->value;
	if (temp)
		temp->next = NULL;  // Remove the last node
	else
		*stac = NULL; //Stack is now empty
	//stack_pop(stac);
	// free (last);   // Free the memory of the last node
	*/
	while (current->next)
	{
		printf("current before: %i\n", current->value);
		current = current->next;
		printf("current after: %i\n", current->value);
			
	}
	printf("current out: %i\n", current->value);

	return (current);
}