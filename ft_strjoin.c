#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    char *res;
    size_t s1_len;
    size_t s2_len;

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);

    res = malloc(s1_len + s2_len + 1);
    if(!res)
        return NULL;
    i = 0;
    while(s1[i])
    {
        res[i] = s1[i];
        i++;
    }
    j = 0;
    while(s2[j])
    {
        res[i] = s2[j];
        j++;
        i++;
    }
    res[i] = '\0';
    return res;
}