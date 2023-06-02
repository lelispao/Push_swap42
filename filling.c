/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:23:53 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/02 14:41:45 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void printList(t_stack *a)
{
	t_stack *current = a;

	if (a == NULL || a->size == 0)
		return ;
	while (current != NULL)
	{
		printf("%d\n", current->value);
		current = current->next;
	}
	printf("\n");
}
