/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:15 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/23 19:05:10 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(t_stack **head)
{
	t_stack	*node;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return ;
	node = *head;
	(*head) = (*head)->next;
	node->next = (*head)->next;
	(*head)->next = node;
}

void	sa(t_stack **a, int i)
{
	swap(a);
	if (i == 0)
		ft_putendl_fd("sa", 1);
}

void	sb(t_stack **b, int i)
{
	swap(b);
	if (i == 0)
		ft_putendl_fd("sa", 1);
}

void	ss(t_stack **a, t_stack **b, int i)
{
	swap(a);
	swap(b);
	if (i == 0)
		ft_putendl_fd("ss", 1);
}
