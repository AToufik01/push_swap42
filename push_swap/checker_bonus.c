/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:18:43 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/23 17:59:34 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int arc, char *arv[])
{
    t_stack *s_a;
    t_stack *s_b;
    int size;

    s_a = NULL;
    s_b = NULL;
    if (arc == 1)
        return (0);
    init_stack(&s_a, arv);
    indexi_stack(&s_a);
    size = ft_size_stack(&s_a);
    // int i = 0;
    // if (check_stack_sorted(&s_a) == 1)
        ft_instarcheck(&s_a, &s_b, size);
        
        
        
        

    
    // {
    //     while(i<5)
    //     {
    //         get_next_line(0);
    //         i++;
            
    //     }
    // }
    
        
    return (0);
}