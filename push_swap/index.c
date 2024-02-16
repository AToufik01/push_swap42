/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:33 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/15 11:42:27 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *min_node(t_stack **a)
{
    t_stack *curr;
    t_stack *min;
    curr = *a;
    min = NULL;

    while (curr)
    {
        if ((curr->index == -1) && (min == NULL || curr->value < min->value))
            min = curr;
        curr = curr->next;
    }
    return (min);
}

void    indexi_stack(t_stack **a)
{
    t_stack *min;
    int     index;
    index = 0;
    min = min_node(a);
    while (min)
    {
        min->index = index++;
        min = min_node(a);
    }
}
