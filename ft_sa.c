/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:13:47 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/09 13:04:51 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	int	temp;

	if (!a->size)
		return ;
	temp = a->stack->next->value;
	a->stack->next->value = a->stack->value;
	a->stack->value = temp;
}