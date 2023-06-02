/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:13:37 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/01 12:29:32 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack* stack_a)
{
    struct s_stack    *current;
    int i;

    i = stack_a->maxsize - 1;
	current = stack_a;
    current->items[0] = current->items[current->top];
	while (current->items[0] == stack_a->items[0])
	{
		stack_a->items[i] = stack_a->items[i + 1];
        current = current->next;
        i--;
	}
}