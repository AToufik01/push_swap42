#include "push_swap.h"

int syntax_error(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (str[i] == '+' || str[i] == '-')
        {
            if(str[i + 1] == '+' || str[i + 1] == '-' || str[i + 1] == ' ')
                return (1);
        }
        if ((str[i] < '0' && str[i] > '9') || str[i] != '+' || str[i] != '-')
            return (1);
        i++;
    }
    return (0);
}

void    add_number_to_stack(t_stack **a, int nb)
{
    t_stack *node;
    t_stack *curr;

    node = malloc(sizeof(t_stack));
    node->value = nb;
    node->index = -1;
    curr = *a;
    while(curr)
        curr = curr->next;
    curr->next = node;
    node->next = NULL;
}

int number_repeat(t_stack **a, int nb)
{
    t_stack *curr;
    curr = *a;
    while(curr)
    {
        if (curr->value == nb)
            return (1);
        curr = curr->next;
    }
    return (0);
}

void    free2darr(char **str)
{
    int i;

    i = 0;
    while (str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
}
void    free_stack_a(t_stack **a)
{
    t_stack *node;
    t_stack *curr;

    curr = *a;
    while (curr)
    {
        node = curr;
        curr = curr->next;
        free(node);
    }
    free(a);

}
void    print_error_free(t_stack **a)
{
    ft_putendl_fd("Error", 1);
    free_stack_a(a);
    exit(0);

}
void    init_stack(t_stack **a, char **arv)
{
    int i;
    int j;
    char **str;
    int nb;

    i = 1;
    while(arv[i])
    {
        if (syntax_error(arv[i]) == 1)
            print_error_free(a);

        str = ft_split(arv[i], ' ');//
        j = 0;
        while(str[j])
        {
            nb = ft_atoi(str[j]); //
            if (nb >INT_MAX || nb < INT_MIN)
                print_error_free(a);
            
            if (number_repeat(a, nb) == 1)
                print_error_free(a);
            add_number_to_stack(a,nb);
            j++;
        }
        free2darr(str);
        i++;
    }
}