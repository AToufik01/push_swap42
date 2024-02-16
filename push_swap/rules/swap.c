/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:15 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/15 11:59:31 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

void    swap(t_stack **a)
{
    t_stack *node;
    t_stack *next_node;
    node = *a;
    (*a) = (*a)->next;
    node->next=(*a)->next;
    (*a)->next =node;



}

void	sa(t_stack **a)
{
    swap(a);
    ft_putendl_fd("sa" , 1);
    
}
void	sb(t_stack **b)
{
    swap(b);
    ft_putendl_fd("sa" , 1);
}
void	ss(t_stack **a, t_stack **b)
{
    swap(a);
    swap(b);
    ft_putendl_fd("ss" , 1);
}
