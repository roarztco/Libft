#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t i;
    char *res;

    start = 0;
    while(s1[start] && ft_strchr(set, s1[start]))
        start++;
    end = ft_strlen(s1);
    while(end > start && ft_strchr(set, s1[end - 1]))
        end--;
    res = malloc(end - start + 1);
    if(!res)
        return NULL;
    i = 0;
    while(start < end)
    {
        res[i] = s1[start];
        start++;
        i++;
    }
    res[i] = '\0';
    return res;
}