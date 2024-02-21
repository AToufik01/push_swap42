/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:19 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/21 16:43:29 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void    rotate(t_stack **head)
{
    t_stack *curr;
    t_stack *node;
    if (head == NULL || *head == NULL)
        return;
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
    ft_putendl_fd("ra", 1);
    rotate(a);
}

void	rb(t_stack **b)
{
    ft_putendl_fd("rb", 1);
    rotate(b);
}

void	rr(t_stack **a, t_stack **b)
{
    ft_putendl_fd("rr", 1);
    rotate(a);
    rotate(b);
}
