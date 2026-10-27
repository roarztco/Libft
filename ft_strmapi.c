#include <stdio.h>
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *res;
    size_t s_len;
    size_t i;

    if(s == NULL || f == NULL)
        return NULL;
    s_len = ft_strlen(s);
    res = malloc(s_len + 1);
    if(!res)
        return NULL;
    i = 0;
    while(i < s_len)
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return res;
}