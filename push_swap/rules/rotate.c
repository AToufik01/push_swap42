#include "push_swap.h"

void    rotate(t_stack **head)
{
    t_stack *curr;
    t_stack *node;

    curr = *head;
    node = curr;
    while (curr)
        curr = curr->next;
    (*head) = (*head)->next;
    curr->next = node;
    node->next = NULL;
}

void	ra(t_stack **a)
{
    rotate(a);
    ft_putendl_fd("ra", 1);
}

void	rb(t_stack **b)
{
    rotate(b);
    ft_putendl_fd("rb", 1);
}

void	rr(t_stack **a, t_stack **b)
{
    rotate(a);
    rotate(b);
    ft_putendl_fd("rr", 1);
}
