/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init1_and_checkerror.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:13:31 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/24 14:45:10 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free2darr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	free_stack(t_stack **a)
{
	t_stack	*node;
	t_stack	*curr;

	curr = *a;
	while (curr)
	{
		node = curr;
		curr = curr->next;
		free(node);
	}
}

void	print_error_free(t_stack **a, char **str)
{
	ft_putendl_fd("Error", 2);
	free2darr(str);
	free_stack(a);
	exit(0);
}

void	print_error(void)
{
	ft_putendl_fd("Error", 2);
	exit(0);
}
