/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:13:50 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/09 13:05:21 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack *b)
{
	int	temp;

	if (!b->size)
		return ;
	temp = b->stack->next->value;
	b->stack->next->value = b->stack->value;
	b->stack->value = temp;
}