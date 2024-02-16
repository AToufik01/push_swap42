#include "push_swap.h"

int is_empty(t_stack **a)
{
    if (a == NULL || *a == NULL)
        return (1);
    return (0);
}
int ft_maxnode(t_stack **b,int size)
{
    t_stack *curr;
    int     i;

    i = 1;
    curr = *b;
    while(curr)
    {
        if (curr->index != size - 1)
            i++;
        else
            break;
        curr = curr->next;
    }
        return (i);
}
void    move_to_stack(t_stack **a, t_stack **b, int size)
{
    int i;
    int move;
    while(is_empty(b) != 1)
    {
        move = ft_maxnode(b,size);
        if(move > size / 2)
            while((*b)->index != size - 1)
                rrb(b);
        else if (move < size / 2)
             while((*b)->index != size - 1)
                rb(b);
        pb(a,b);
        size--;
    }
}

void    sort_numbers(t_stack **a, t_stack **b, int size, int div)
{
    int size_chunk;
    int mdchunk;
    int total_size;
    int i;
    total_size = size;
    size_chunk = size / div;
    mdchunk = size_chunk / 2;
    while(is_empty(a) != 1)
    {
        i = size;
        while (i>0)
        {
            if ((*a)->index < size_chunk)
            {
                pb(b, a);
                if ((*b)->index < mdchunk)
                    rb(b);
                size--;
            }
            else
                ra(a);
            i--;
        }
        mdchunk = size_chunk + size_chunk / 2;
        size_chunk *= 2;
    }
    move_to_stack(a,b, total_size);
}
