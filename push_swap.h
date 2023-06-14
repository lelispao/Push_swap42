#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "../ft_printf/ft_printf.h"

typedef struct  node
{
    int value;
    struct  node *next;
	struct  node *prev;
}t_node;
typedef struct	stack
{
	t_node		*stack;
	int			size;
}t_stack;
int     ft_atoi(char *nptr);
int     ft_printf(const char *str, ...);
int		indexfinder(t_stack a);
int		issorted(t_stack a);
int		minfinder(t_stack a);

// size_t  ft_strlen(const char *s);

void	printlist(const t_stack *a);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack a, t_stack b);
void	pa(t_stack *a, t_stack *b);
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

#endif