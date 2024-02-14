#include "push_swap.h"

int is_empty(t_stack **a)
{
    if (a == NULL || *a == NULL)
        return (1);
    return (0);
}

void    sort_numbers(t_stack **a, t_stack **b, int size, int div)
{
    int size_chunk;
    int mdchunk;
    int i;

    size_chunk = size / div;
    mdchunk = size_chunk / 2;
    while(is_empty(a) == 1)
    {
        i = size;
        while (i>0)
        {
            if ((*a)->index < size_chunk)
            {
                pb(b, a);
                size--;
            }
            else
                ra(a);
            i--;
        }
        size_chunk +=size_chunk;
        mdchunk = size_chunk +mdchunk; 
    }

}