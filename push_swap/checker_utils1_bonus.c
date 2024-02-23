/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils1_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:29:52 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/23 16:51:31 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    do_rotate(t_stack **a,t_stack **b, char *str, int len)
{
    if (ft_strncmp(str, "ra",len) != 1)
        ra(a, 1);
    else if (ft_strncmp(str, "rb",len) != 1)
        rb(b, 1);
    else
        rr(a, b, 1);
}

void    do_reverse_rotate(t_stack **a,t_stack **b, char *str, int len)
{
        if (ft_strncmp(str, "rra",len) != 1)
        rra(a, 1);
    else if (ft_strncmp(str, "rrb",len) != 1)
        rrb(b, 1);
    else
        rrr(a, b, 1);
}

void    do_swap(t_stack **a,t_stack **b, char *str, int len)
{
    if (ft_strncmp(str, "sa",len) != 1)
        sa(a, 1);
    else if (ft_strncmp(str, "sb",len) != 1)
        sb(b, 1);
    else
        ss(a, b, 1);
}

void    do_push(t_stack **a,t_stack **b, char *str, int len)
{
    if (ft_strncmp(str, "pa",len) != 1)
        pa(a, b, 1);
    else
        pb(a, b, 1);
}