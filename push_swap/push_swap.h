/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 00:28:40 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/21 15:01:16 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include <stdio.h>///
# include <stdlib.h>
# include <limits.h>
#include <unistd.h>

typedef struct s_stack
{
	int	value;
	int	index;
	struct s_stack *next;
}   t_stack;


///hendel error input
void	ft_putendl_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
long	ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_putchar_fd(char c, int fd);
void    init_stack(t_stack **a, char **arv);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	print_error_free(void);

//*

void    indexi_stack(t_stack **a);
t_stack *min_node(t_stack **a);
//*

//SORTE
int		check_stack_sorted(t_stack **a);//
int		ft_size_stack(t_stack **a);
void	sort_stack(t_stack **a, t_stack **b);//
void	sort_3_number(t_stack **a);
void	sort_4_number(t_stack **a, t_stack **b);
void	reset_stack(t_stack **a);
void	sort_5_number(t_stack **a, t_stack **b);
void	sort_numbers(t_stack **a, t_stack **b, int size, int div);
void	move_to_stack(t_stack **a, t_stack **b);
// void    move_to_stack(t_stack **a, t_stack **b, int size);
int		is_empty(t_stack **a);
int		find_max_index(t_stack **b,int size);
int		number_move(int pos, int size);
int		find_best_move(int move_1, int move_2, int size);
void	push_node_back(t_stack **a, t_stack **b, int pos, int indx_max);
void	move_to_stack(t_stack **a, t_stack **b);

//rules
void	ra(t_stack **a);
void	rb(t_stack **b);
void	sa(t_stack **a);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

//*

#endif