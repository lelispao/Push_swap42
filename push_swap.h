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
}   t_node;
typedef struct	stack
{
	t_node *stack;
	int	size;
}	t_stack;

int     ft_atoi(char *nptr);
int     ft_printf(const char *str, ...);

size_t  ft_strlen(const char *s);

void	printList(t_stack a);
void	ra(t_stack stack_a);
void	rb(t_stack stack_b);
void	rr(t_node *stack_a , t_node *stack_b);
void	sa(t_stack *a);
void	sb(t_node *b);
void	rr(t_node *a , t_node *b);
void	rra(t_node** stack_a);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);

t_node	*reverse(t_node *stack);
void	stack_creation(t_stack *stack, int argc, char **argv);
//void	stack_pop(t_stack *a);
//t_node *last_node(t_node stack);

/*int     *ft_check(char  *string);
void    mywrite(char c);
void    ft_error(void);
*/

#endif