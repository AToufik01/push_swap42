/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:14:58 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/24 14:11:24 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_best_move(int move_1, int move_2, int size)
{
	int	cos_max;
	int	cos_s_max;

	cos_max = number_move(move_1, size);
	cos_s_max = number_move (move_2, size);
	if (cos_max <= cos_s_max)
		return (1);
	else
		return (0);
}

void	push_node_back(t_stack **a, t_stack **b, int pos, int indx_max)
{
	if (pos >= ft_size_stack(b) / 2)
		while ((*b)->index != indx_max)
			rrb(b, 0);
	else
		while ((*b)->index != indx_max)
			rb(b, 0);
	pa(a, b, 0);
}

void	move_to_stack(t_stack **a, t_stack **b)
{
	int	pos_max;
	int	pos_s_max;

	while ((*b))
	{
		if (ft_size_stack(b) == 1)
		{
			pa(a, b, 0);
			break ;
		}
		pos_max = find_max_index(b, ft_size_stack(b) - 1);
		pos_s_max = find_max_index(b, ft_size_stack(b) - 2);
		if (find_best_move(pos_max, pos_s_max, ft_size_stack(b)))
			push_node_back(a, b, pos_max, ft_size_stack(b) - 1);
		else
		{
			push_node_back(a, b, pos_s_max, ft_size_stack(b) - 2);
			push_node_back(a, b, pos_max, ft_size_stack(b));
			sa(a, 0);
		}
	}
}

void	push_szchunk_to_b(t_stack **a, t_stack **b, int sz_chunk, int mdchunk)
{
	if ((*a)->index < sz_chunk)
	{
		pb(a, b, 0);
		if ((*b)->index > mdchunk && (*a) != NULL && (*a)->index > sz_chunk)
			rr(a, b, 0);
		else if ((*b)->index > mdchunk)
			rb(b, 0);
	}
	else
		ra(a, 0);
}

void	sort_numbers(t_stack **a, t_stack **b, int size, int div)
{
	int	sz_chunk;
	int	mdchunk;
	int	last_chunk;

	sz_chunk = size / div;
	last_chunk = sz_chunk;
	mdchunk = sz_chunk / 2;
	while ((*a))
	{
		while (sz_chunk != ft_size_stack(b) && size != ft_size_stack(b))
			push_szchunk_to_b(a, b, sz_chunk, mdchunk);
		sz_chunk = last_chunk + sz_chunk;
		mdchunk = mdchunk + last_chunk;
	}
	move_to_stack(a, b);
}
