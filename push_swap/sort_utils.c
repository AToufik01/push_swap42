/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:03:27 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/23 22:17:41 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_index(t_stack **b, int max)
{
	t_stack	*curr;
	int		i;

	i = 0;
	curr = *b;
	while (curr)
	{
		if (curr->index != max)
			i++;
		else
			break ;
		curr = curr->next;
	}
	return (i);
}

int	number_move(int pos, int size)
{
	if (pos >= size / 2)
		return (size - pos);
	else
		return (pos);
}
