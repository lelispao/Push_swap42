/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:29:28 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/09 14:19:28 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_temp;
	//t_stack stack_tempb;
	stack_creation(&stack_temp, argc, argv);
	//stack_creation(&stack_tempb,argc, argv);
	printlist(stack_temp);
	//ra(stack_temp);
	rra(stack_temp);
	printlist(stack_temp);
	// printlist(stack_tempb);
	// printlist(stack_temp);
	/*if (ft_check(*argv) == 0)
		ft_error();
	//temp = ft_atoi(filling(*argv));
	ft_code(*temp);*/
	return (0);
}
