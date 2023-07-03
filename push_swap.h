/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:54:56 by lkioukou          #+#    #+#             */
/*   Updated: 2023/07/03 15:01:02 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include "../ft_printf/ft_printf.h"
typedef struct node
{
	int					value;
	struct node			*next;
	struct node			*prev;
}t_node;
typedef struct stack
{
	t_node		*stack;
	int			size;
}t_stack;
int		ft_atoi(char *nptr);
int		ft_printf(const char *str, ...);
int		indexfinder(t_stack a);
int		issorted(t_stack a);
int		minfinder(t_stack a);
int		stringlen(char *s);
void	printlist(const t_stack *a, char stack_name);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack a, t_stack b);
void	pa(t_stack *b, t_stack *a);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack stack_a);
void	rb(t_stack stack_b);
void	rr(t_stack a, t_stack b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack a, t_stack b);
void	stack_creation(t_stack *stack, int argc, char **argv);
void	minisort(t_stack *a);
void	smallsort(t_stack *a);
void	classic_op(t_stack *a);
void	firstsmall(t_stack *a, int min, int max);
void	secondsmall(t_stack *a, int min, int max);
void	midsort(t_stack *a, t_stack *b, int argc, char **argv);
void	push(t_stack *source, t_stack *dest);
void	thebigsort(t_stack *a, t_stack *b, int argc, char **argv);
void	max_or_min(t_stack *a, int max, int min);
char	*thebiggestones(int *indexs, int argc , t_stack *a);
int		big_n(int *s);
int		all_mighty_sort(char *s, t_stack *a, t_stack *b, int *listnums);
int		resort(t_stack *a, t_stack *b, int function_counter);
int		final_sort_a(t_stack *a, int function_counter, char *s);
int		third_med(char *s, int *listnums, char character);
char	*srra(char *s);
char	*sra(char *s);
char	*spush(char *s);
char	*sswap(char *s);


#endif