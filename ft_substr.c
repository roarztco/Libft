#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t s_len;
    size_t i;
    char *res;

    s_len = ft_strlen(s);

    if(start => s_len)
        len = 0;
    else if(len > s_len - start)
        len = s_len - start;
    res = malloc(len + 1);
    if(res == NULL)
        return NULL;
    i = 0;
    while(i < len)
    {
        res[i] = s[start + i];
        i++;
    }
    res[i] = '\0';
    return res;
}