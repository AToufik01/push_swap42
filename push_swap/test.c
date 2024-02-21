#include "push_swap.h"
int number_move(int move, int size)
{
    if (move > size /2)
        return ((size - move) + 1);
    else
        return (move);
}
int find_best_move(int mv1, int mv2, int size)
{
    int cos_max;
    int cos_s_max;

    cos_max = number_move(mv1, size);
    cos_s_max = number_move(mv2, size);
    if (cos_max <=cos_s_max)
        return (1);
    return (0);
}

void    push_node_back(t_stack **a, t_stack **b,int pos_max, int size)
{
  
    if (pos_max > ft_size_stack(b) / 2)
    {
        while(*b && (*b)->index != size)
            rrb(b);
    }
    else
    {
        while(*b && (*b)->index != size)
            rb(b);
    }
    pa(a, b);
}

void    move_to_stack(t_stack **a, t_stack **b)
{
    int pos_max;
    int pos_s_max;


    while(is_empty(b)!=1)
    {
        pos_max = find_max_index(b, ft_size_stack(b) - 1);
        pos_s_max = find_max_index(b, ft_size_stack(b) - 2);
        if (find_best_move(pos_max, pos_s_max, ft_size_stack(b)))
            push_node_back(a,b,pos_max,ft_size_stack(b)-1);
        else
        {
            push_node_back(a, b, pos_s_max, ft_size_stack(b)-2);
            push_node_back(a,b,pos_max, ft_size_stack(b));
            sa(a);
        }
    }
}


void        ft_puch_stacka(t_stack **stacka, t_stack **stackb)
{
        int        b_pos;
        int        s_pos;
        int        op1;
        int        op2;

        while (*stackb)
        {

                get_pos(stackb, 1, &b_pos, &s_pos);
                op1 = ft_best_move(ft_lstsize(*stackb), b_pos);
                op2 = ft_best_move(ft_lstsize(*stackb), s_pos);
                if (op2 < op1)
                {
                        push_slnbr_ska(stackb, stacka, &op2, &s_pos);
                        get_pos(stackb, 0, &b_pos, &s_pos);
                        push_bignbr_ska(stacka, stackb, &op1, &b_pos);
                }
                else
                        push_bignbr_to_ska(stacka, stackb, &b_pos, &op1);
        }
}
