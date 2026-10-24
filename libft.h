#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_isalpha(int c);
t_list *ft_lstlast(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void *));

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

#endif