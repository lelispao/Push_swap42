#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "../ft_printf/ft_printf.h"

typedef struct  s_stack
{
    int maxsize;
    int top;
	int	size;
    int value;
    struct  s_stack *next;
}   t_stack;

void	printList(t_stack *a);
int     ft_atoi(char *nptr);
size_t  ft_strlen(const char *s);
int     ft_printf(const char *str, ...);
void	ra(t_stack* stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack* stack_a , t_stack* stack_b);

//t_stack *last_node(t_stack stack);

/*int     *ft_check(char  *string);
void    mywrite(char c);
void    ft_error(void);
*/

#endif