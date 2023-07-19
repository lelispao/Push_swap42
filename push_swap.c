/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:29:28 by lkioukou          #+#    #+#             */
/*   Updated: 2023/07/04 15:24:45 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	freebuf();
// {
// }

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	printf("skata");
	stack_creation(&a, argc, argv);
	stack_creation(&b, 0, argv);
	/*if (ft_check(*argv) == 0)
		ft_error();*/
	if (argc <= 2)
	{
		printlist(&a, 'a');
		return (0);
	}
	else if (argc <= 4)
		minisort(&a); // 3
	else if (argc < 6)
		smallsort(&a);
	else if (argc <= 7) // kanonika ine 7
		midsort(&a, &b, argc, argv);
	else
		thebigsort(&a, &b, argc, argv);
	printlist(&a, 'a');
	printlist(&b, 'b');
	return (0);
}
