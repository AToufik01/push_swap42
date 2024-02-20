/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:39:01 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/19 16:43:34 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_stack_sorted(t_stack **a)
{
	t_stack *curr;

	curr = *a;
	while (curr != NULL && curr->next != NULL)
	{
		if (curr->index > curr->next->index)
			return (1);
		curr = curr->next;
	}
	return (0);
}

int	ft_size_stack(t_stack **a)
{
	t_stack	*curr;
	int		i;

	i = 0;
	curr = *a;
	while (curr != NULL)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}

void    sort_stack(t_stack **a, t_stack **b)
{
	int size;
	
	size = ft_size_stack(a);
	if (size == 2)
		sa(a);
	else if (size == 3)
		sort_3_number(a);
	else if (size == 4)
		sort_4_number(a,b);
	else if (size == 5)
		sort_5_number(a,b);
	else
	{
		if (size > 100)
			sort_numbers(a, b, size, 9);
		else
			sort_numbers(a, b, size, 5);
	}
}
 