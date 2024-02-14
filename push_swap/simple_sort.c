#include "push_swap.h"


void	sort_3_number(t_stack **a)
{
    while (1)
    {
        if ((*a)->index >(*a)->next->index)
        {
            ra(a);
            if (check_stack_sorted(a)==1)
                break;
        }
        if ((*a)->index <(*a)->next->index)
        {
            sa(a);
            if (check_stack_sorted(a)==1)
                break;
        }
    }
}

void	sort_4_number(t_stack **a, t_stack **b)
{
    while((*a)->index !=0)
        ra(a);
    pb(b,a);
    sort_3_number(a);
    pa(a,b);
}


void	sort_5_number(t_stack **a, t_stack **b)
{
    while((*a)->index !=0)
        ra(a);
    pb(b,a);
    reset_stack(a);
    indexi_stack(a);
    sort_4_number(a, b);
    pa(a, b);
}