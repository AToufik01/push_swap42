/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:46 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/23 16:49:09 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3_number(t_stack **a)
{
    while (1)
    {
        if ((*a)->index >(*a)->next->index)
        {
            ra(a, 0);
            if (check_stack_sorted(a)!=1)
                break;
        }
        if ((*a)->index <(*a)->next->index)
        {
            sa(a, 0);
            if (check_stack_sorted(a)!=1)
                break;
        }
    }
}

void	sort_4_number(t_stack **a, t_stack **b)
{
    while((*a)->index !=0)
        ra(a, 0);
    pb(a,b, 0);
    sort_3_number(a);
    pa(a,b, 0);
}

void    reset_stack(t_stack **a)
{
    t_stack *curr;
    curr = *a;
    while(curr)
    {
        curr->index = -1;
        curr = curr->next;
    }
}

void	sort_5_number(t_stack **a, t_stack **b)
{
    while((*a)->index !=0)
        ra(a, 0);
    pb(a,b, 0);
    reset_stack(a);
    indexi_stack(a);
    sort_4_number(a, b);
    pa(a, b, 0);
}
