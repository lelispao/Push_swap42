/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:29:28 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/02 15:13:02 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack	*stack_b;
	t_stack	*temp;
	int		i;
	
	i = 1;
	stack_a = malloc(sizeof(t_stack));
	stack_a->next = NULL;
	stack_a->size = 0;
	while (i < argc)
	{
		temp = malloc(sizeof(t_stack));
		temp->value = ft_atoi(argv[i]);
		if (stack_a->size == 0)
		{
			stack_a = temp;
		}
		else
		{
			temp->next = stack_a;
			stack_a = temp;
		}
		stack_a->size += 1;

		i++;
	}
	printList(stack_a);
	ra(stack_a);
	printList(stack_a);
	/*if (ft_check(*argv) == 0)
		ft_error();
	//temp = ft_atoi(filling(*argv));
	ft_code(*temp);*/
	return (0);
}