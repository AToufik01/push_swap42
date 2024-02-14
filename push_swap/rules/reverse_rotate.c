#include "push_swap.h"

void    reverse_rotate(t_stack **head)
{
    t_stack *last;
    last = *head;
    while (last->next->next)
        last = last->next;
    last->next->next = *head;
    last->next = NULL;
}

void	rra(t_stack **a)
{
    reverse_rotate(a);
    ft_putendl_fd("rra", 1);
}

void	rrb(t_stack **b)
{
    reverse_rotate(b);
    ft_putendl_fd("rrb", 1);
}

void	rrr(t_stack **a, t_stack **b)
{
        reverse_rotate(a);
        reverse_rotate(b);
        ft_putendl_fd("rrr", 1);
}