#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_isalpha(int c);

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

#endif