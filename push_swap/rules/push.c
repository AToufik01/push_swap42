/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:25 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/16 17:26:01 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

void    push(t_stack **a, t_stack **b)
{
    t_stack *new_node;
    new_node = *a;
    *a = (*a)->next;
    if (*b == NULL)
    {
        new_node->next = NULL;
        *b = new_node ;
    }
    else
    {
        new_node->next = *b;
        *b = new_node;
    }    
}


void	pa(t_stack **a, t_stack **b)
{
    push(a, b);
    ft_putendl_fd("pa", 1);
}

void	pb(t_stack **a, t_stack **b)
{
    push(b,a);
    ft_putendl_fd("pb" ,1);
}
