/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:19:28 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/23 18:05:40 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_stack_sorted(t_stack **a)
{
	t_stack *curr;

	curr = *a;
	while (curr != NULL && curr->next != NULL)
	{
		if (curr->index > curr->next->index)
			return (1);
		curr = curr->next;
	}
	return (0);
}
int	ft_size_stack(t_stack **a)
{
	t_stack	*curr;
	int		i;

	i = 0;
	curr = *a;
	while (curr != NULL)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n == 0 || (p1[i] == 0 && p2[i] == 0))
		return (0);
	while (--n && p1[i])
	{
		if (p1[i] != p2[i])
			return (1);
		i++;
	}
	return (0);
}

void    ft_instarcheck(t_stack **a, t_stack **b,int size)
{
    char *str;
    int len;

    while (1)
    {
        str = get_next_line(0);
        if (str == NULL)
            break;
        len = ft_strlen(str);
        if(ft_strncmp(str, "ra",len) != 1 || ft_strncmp(str, "rb",len) != 1 || ft_strncmp(str, "rr",len) != 1)
            do_rotate(a,b,str, len);
        else if(ft_strncmp(str, "rra",len)!=1 || ft_strncmp(str, "rrb",len)!=1 || ft_strncmp(str, "rrr",len) != 1)
            do_reverse_rotate(a,b,str, len);
        else if(ft_strncmp(str, "sa",len) !=1 || ft_strncmp(str, "sb",len) !=1 ||ft_strncmp(str, "ss",len) != 1)
            do_swap(a,b,str, len);
        else if(ft_strncmp(str, "pa",len) !=1 || ft_strncmp(str, "pb",len) != 1)
            do_push(a,b,str, len);
        else
        {
            ft_putendl_fd("Error", 2);
            return ;
        }
    }
    if (check_stack_sorted(a) != 1 && size == ft_size_stack(a))
        ft_putendl_fd("OK", 1);
    else
        ft_putendl_fd("KO", 1);
}
