/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils1_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:29:52 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/24 13:36:08 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rotate(t_stack **a, t_stack **b, char *str, int len)
{
	if (ft_strncmp(str, "ra\n", len) != 1)
		ra(a, 1);
	else if (ft_strncmp(str, "rb\n", len) != 1)
		rb(b, 1);
	else
		rr(a, b, 1);
}

void	do_reverse_rotate(t_stack **a, t_stack **b, char *str, int len)
{
	if (ft_strncmp(str, "rra\n", len) != 1)
		rra(a, 1);
	else if (ft_strncmp(str, "rrb\n", len) != 1)
		rrb(b, 1);
	else
		rrr(a, b, 1);
}

void	do_swap(t_stack **a, t_stack **b, char *str, int len)
{
	if (ft_strncmp(str, "sa\n", len) != 1)
		sa(a, 1);
	else if (ft_strncmp(str, "sb\n", len) != 1)
		sb(b, 1);
	else
		ss(a, b, 1);
}

void	do_push(t_stack **a, t_stack **b, char *str, int len)
{
	if (ft_strncmp(str, "pa\n", len) != 1)
		pa(a, b, 1);
	else
		pb(a, b, 1);
}
