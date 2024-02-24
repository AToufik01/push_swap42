/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:18:43 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/24 14:53:15 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int arc, char *arv[])
{
	t_stack	*s_a;
	t_stack	*s_b;
	int		size;

	s_a = NULL;
	s_b = NULL;
	if (arc == 1)
		return (0);
	init_stack(&s_a, arv);
	indexi_stack(&s_a);
	size = ft_size_stack(&s_a);
	ft_instarcheck(&s_a, &s_b, size);
	free_stack(&s_a);
	free_stack(&s_b);
	return (0);
}
