/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:22 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/23 16:44:12 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void    reverse_rotate(t_stack **head)
{
    t_stack *last;
    if (head == NULL || *head ==NULL)
        return;
    last = *head;
    while (last->next && last->next->next)
        last = last->next;
    last->next->next = *head;
    *head = last->next;
    last->next = NULL;
}

void	rra(t_stack **a, int i)
{
    reverse_rotate(a);
    if (i == 0)
        ft_putendl_fd("rra", 1);
}

void	rrb(t_stack **b, int i)
{
    reverse_rotate(b);
    if(i == 0)
        ft_putendl_fd("rrb", 1);
}

void	rrr(t_stack **a, t_stack **b,int i)
{
    reverse_rotate(a);
    reverse_rotate(b);
    if (i == 0)
        ft_putendl_fd("rrr", 1);
}
