/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:42 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/24 14:53:02 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int arc, char *arv[])
{
	t_stack	*s_a;
	t_stack	*s_b;

	s_a = NULL;
	s_b = NULL;
	if (arc == 1)
		return (0);
	init_stack(&s_a, arv);
	indexi_stack(&s_a);
	if (check_stack_sorted(&s_a) == 1)
		sort_stack(&s_a, &s_b);
	free_stack(&s_a);
	free_stack(&s_b);
	return (0);
}
