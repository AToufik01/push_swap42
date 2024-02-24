/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:25 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/23 19:03:17 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push(t_stack **a, t_stack **b)
{
	t_stack	*new_node;

	if (a == NULL || *a == NULL)
		return ;
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

void	pa(t_stack **a, t_stack **b, int i)
{
	push(b, a);
	if (i == 0)
		ft_putendl_fd("pa", 1);
}

void	pb(t_stack **a, t_stack **b, int i)
{
	push(a, b);
	if (i == 0)
		ft_putendl_fd("pb", 1);
}
