/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:15:48 by lkioukou          #+#    #+#             */
/*   Updated: 2023/06/01 12:09:41 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *ft_check(char  *string)
{
    int i;

    i = 0;
    while (string[i])
    {
        if (string[i] > 9 && string[i] < 0)
            return (0);
        i++;
    }
    return (1);
}

int isFull(t_stack *st)
{
    return (st->top == st->maxsize - 1);
}