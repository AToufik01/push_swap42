/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:14:58 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/20 19:40:46 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_empty(t_stack **a)
{
    if (a == NULL || *a == NULL)
        return (1);
    return (0);
}

int find_max_index(t_stack **b,int size)
{
    t_stack *curr;
    int     i;

    i = 0;
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

void    sort_numbers(t_stack **a, t_stack **b, int size, int div)
{
    int sz_chunk;
    int mdchunk;
    int last_chunk;

    sz_chunk = size / div;
    last_chunk = sz_chunk;
    mdchunk = sz_chunk / 2;
    while (is_empty(a) != 1)
    {
        while (sz_chunk != ft_size_stack(b) && size != ft_size_stack(b))
        {
            if ((*a)->index < sz_chunk)
            {
                pb(a, b);
                // if ((*b)->index > mdchunk && (*a)->index > sz_chunk)
                //     rr(a,b);
                if ((*b)->index > mdchunk)
                    rb(b);
            }
            else
                ra(a);
        }
        sz_chunk = last_chunk + sz_chunk;
        mdchunk = mdchunk + last_chunk;
    }
    move_to_stack(a, b);
}
