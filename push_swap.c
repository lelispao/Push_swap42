/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:29:28 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/14 15:01:50 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack b;
	stack_creation(&a, argc, argv);
	stack_creation(&b,argc, argv);
	if (argc == 2)
	{
		printlist(&a);
		return (0);
	}
	if (argc <= 4)
		minisort(&a); // 3
	if (argc <= 6)
		smallsort(&a, &b);
	// smallsort(a,b); // 5
	// midsort(a,b); // 10
	// thebigsort(a,b); //??
	//ra(a);
	//rra(a);
	printlist(&a);
	// printlist(b);
	// printlist(a);
	/*if (ft_check(*argv) == 0)
		ft_error();*/
	return (0);
}
