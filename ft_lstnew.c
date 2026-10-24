#include "libft.h"

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