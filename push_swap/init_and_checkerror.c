/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_and_checkerror.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:38 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/24 14:44:59 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	syntax_error(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[0] == '\0' || str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i + 1] == '+' || str[i + 1] == '-'
				|| str[i + 1] == ' ' || str[i + 1] == '\0')
				return (1);
		}
		if (str[i] < '0' && str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

void	add_number_to_stack(t_stack **a, int nb)
{
	t_stack	*node;
	t_stack	*curr;

	node = malloc(sizeof(t_stack));
	node->value = nb;
	node->index = -1;
	node->next = NULL;
	if ((*a) == NULL)
	{
		*a = node;
		return ;
	}
	curr = *a;
	while (curr->next)
		curr = curr->next;
	curr->next = node;
}

int	number_repeat(t_stack **a, int nb)
{
	t_stack	*curr;

	if (a == NULL || *a == NULL)
		return (0);
	curr = *a;
	while (curr)
	{
		if (curr->value == nb)
			return (1);
		curr = curr->next;
	}
	return (0);
}

void	init_stack(t_stack **a, char **arv)
{
	int		i;
	int		j;
	char	**str;
	long	nb;

	i = 1;
	while (arv[i])
	{
		if (syntax_error(arv[i]) == 1)
			print_error();
		str = ft_split(arv[i], ' ');
		j = 0;
		while (str[j])
		{
			nb = ft_atoi(str[j]);
			if (nb > INT_MAX || nb < INT_MIN)
				print_error_free(a, str);
			if (number_repeat(a, nb) == 1)
				print_error_free(a, str);
			add_number_to_stack(a, nb);
			j++;
		}
		free2darr(str);
		i++;
	}
}
