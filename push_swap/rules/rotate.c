/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:19 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/16 18:12:49 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void    rotate(t_stack **head)
{
    t_stack *curr;
    t_stack *node;

    curr = *head;
    node = curr;
    while (curr ->next)
        curr = curr->next;
    curr->next = node;
    (*head) = (*head)->next;
    node->next = NULL;
}

void	ra(t_stack **a)
{
    rotate(a);
    ft_putendl_fd("ra", 1);
}

void	rb(t_stack **b)
{
    rotate(b);
    ft_putendl_fd("rb", 1);
}

void	rr(t_stack **a, t_stack **b)
{
    rotate(a);
    rotate(b);
    ft_putendl_fd("rr", 1);
}
