#include "push_swap.h"

int main(int arc, char *arv[])
{
    t_stack *s_a;
    t_stack *s_b;

    s_a = NULL;
    s_b = NULL;
    if (arc <1)
        return (0);
    init_stack(&s_a, arv);
    indexi_stack(&s_a);
    if (check_stack_sorted(&s_a)==1)
        sort_stack(&s_a, &s_b);
        
    return (0);
}