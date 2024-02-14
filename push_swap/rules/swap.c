
#include "push_swap.h"

void    swap(t_stack **a)
{
    t_stack *node;
    t_stack *next_node;
    node = *a;
    (*a) = (*a)->next;
    node->next=(*a)->next->next;
    (*a)->next =node;



}

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
