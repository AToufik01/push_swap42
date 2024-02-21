/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:22 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/21 16:43:47 by ataoufik         ###   ########.fr       */
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

void	rra(t_stack **a)
{
    ft_putendl_fd("rra", 1);
    reverse_rotate(a);
}

void	rrb(t_stack **b)
{
    ft_putendl_fd("rrb", 1);
    reverse_rotate(b);
}

void	rrr(t_stack **a, t_stack **b)
{
        ft_putendl_fd("rrr", 1);
        reverse_rotate(a);
        reverse_rotate(b);
}
