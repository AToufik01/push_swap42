/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:46 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/23 21:59:56 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reset_stack(t_stack **a)
{
	t_stack	*curr;

	curr = *a;
	while (curr)
	{
		curr->index = -1;
		curr = curr->next;
	}
}

void	sort_3_number(t_stack **a)
{
	t_stack	*cur;
	int		i;

	i = 0;
	cur = *a;
	while (cur)
	{
		if (cur->index == 2)
			break ;
		cur = cur->next;
		i++;
	}
	if (i == 2)
		sa(a, 0);
	else if (i == 0 || i == 1)
	{
		if (i == 0)
			ra(a, 0);
		if (i == 1)
			rra(a, 0);
		if (check_stack_sorted(a) == 1)
			sa(a, 0);
	}
}

int	ft_pos_min_index(t_stack **a)
{
	t_stack	*cur;
	int		i;

	i = 0;
	cur = *a;
	while (cur)
	{
		if (cur->index == 0)
			break ;
		cur = cur->next;
		i++;
	}
	return (i);
}

void	sort_4_number(t_stack **a, t_stack **b)
{
	int	i;

	i = ft_pos_min_index(a);
	if (i == 3 || i == 2)
	{
		rra(a, 0);
		if (i == 2)
			rra(a, 0);
	}
	else if (i == 1)
		ra(a, 0);
	pb(a, b, 0);
	reset_stack(a);
	indexi_stack(a);
	sort_3_number(a);
	pa(a, b, 0);
}

void	sort_5_number(t_stack **a, t_stack **b)
{
	int	i;

	i = ft_pos_min_index(a);
	if (i == 4 || i == 3 || i == 2)
	{
		rra(a, 0);
		if (i == 3 || i == 2)
		{
			rra(a, 0);
			if (i == 2)
				rra(a, 0);
		}
	}
	else if (i == 1)
		ra(a, 0);
	pb(a, b, 0);
	reset_stack(a);
	indexi_stack(a);
	sort_4_number(a, b);
	pa(a, b, 0);
}
