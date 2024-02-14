#include "push_swap.h"

t_stack *min_node(t_stack **a)
{
    t_stack *curr;
    t_stack *min;
    curr = *a;
    while (curr)
    {
        if ((curr->index == -1) && (curr->value < min->value))
            min = curr;
        curr = curr->next;
    }
    return (min);
}

void    indexi_stack(t_stack **a)
{
    t_stack *min;
    int     index;
    index = 0;
    min = min_node(a);
    while (min)
    {
        min->index = index++;
        min = min_node(a);
    }
}