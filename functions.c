/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:20:10 by lkioukou          #+#    #+#             */
/*   Updated: 2023/05/31 19:45:17 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    mywrite(char c)
{
    write(1, &c, 1);
}

struct  stack*  stack_creation(int a)
{
    struct  stack	*stack_a;

    stack_a = (struct stack*)malloc(sizeof(struct stack));
	stack_a->maxsize = a;
	stack_a->top = -1;
	stack_a->items = (int*)malloc(a * sizeof(int));
	return (stack_a);
}
/*
struct  stack  stack_creation(int b)
{
    struct  stack	*stack_b;

    stack_b = (struct stack*)malloc(sizeof(struct stack));
	stack_b->maxsize = b;
	stack_b->top = -1;
	return (stack_b);
}*/