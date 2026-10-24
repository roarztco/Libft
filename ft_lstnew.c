//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
typedef struct s_list
{
    void *content;
    struct s_list *next;
}t_list;

t_list *ft_lstnew(void *content)
{
    t_list *node;

    node = malloc(sizeof(t_list));
    if(node == NULL)
        return NULL;
    node->content = content;
    node->next = NULL;
    return (node);
}

int main()
{
    int num;
    t_list *node;

    node = ft_lstnew(&num);

    printf("%d\n", *(int *)node);
}