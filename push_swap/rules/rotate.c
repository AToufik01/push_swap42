/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:19 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/23 16:45:12 by ataoufik         ###   ########.fr       */
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

void	ra(t_stack **a, int i)
{
    rotate(a);
    if (i ==0)
        ft_putendl_fd("ra", 1);
}

void	rb(t_stack **b, int i)
{
    rotate(b);
    if (i == 0)
        ft_putendl_fd("rb", 1);
}

void	rr(t_stack **a, t_stack **b, int i)
{
    rotate(a);
    rotate(b);
    if (i == 0)
        ft_putendl_fd("rr", 1);
}
