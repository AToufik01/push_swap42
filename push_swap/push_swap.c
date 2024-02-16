/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:56:42 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/16 17:34:47 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int arc, char *arv[])
{
    t_stack *s_a;
    t_stack *s_b;

    s_a = NULL;
    s_b = NULL;
    if (arc == 1)
        return (0);
    init_stack(&s_a, arv);
    indexi_stack(&s_a);
    if (check_stack_sorted(&s_a)==1)
        sort_stack(&s_a, &s_b);
//     pa(&s_a,&s_b);
//     pa(&s_a,&s_b);
//     // pa(&s_a,&s_b);
//     pb(&s_a, &s_b);
        
    t_stack *cu;
//     t_stack *cu1;
    cu =s_a;
//     cu1 =s_b;
    while(cu)
    {
        printf(" |    %d     |\n",cu->value);
        cu = cu->next;
    }
        printf("  ------------ \n");
        printf(" |    s_a     |\n");
        printf("  ----------- \n");
//         printf("\n\n\n");
//  while(cu1)
//     {
//         printf(" |    %d     |\n",cu1->value);
//         cu1 = cu1->next;
//     }
//         printf("  ------------  \n");
//         printf(" |    s_b     |\n");
//         printf("  ----------- ");

     
    return (0);
}