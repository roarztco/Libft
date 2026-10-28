#include <stdio.h>
#include <stdlib.h>

int count_words(char const *s, char c)
{
    size_t i;
    size_t count;

    i = 0;
    count = 0;
    while(s[i])
    {
        if(s[i] != c && (i ==  0 || s[i - 1] == c))
            count++;
        i++;
    }
    return count;
}

char **ft_split(char const *s, char c)
{
    char **res;
    char *word;
    size_t start;
    size_t len;
    size_t i;
    size_t j;

    if(!s)
        return NULL;

    res = malloc((count_words(s, c) + 1) * sizeof(char *));
    if(!res)
        return NULL;
    start = 0;
    j = 0;
    while(s[start])
    {
        while(s[start] == c)
            start++;
        if(!s[start])
            break;
        len = 0;
        while(s[start + len] && s[start + len] != c)
            len++;
        word = malloc(len + 1);
        if(!word)
        {
            while(j > 0)
                free(res[--j]);
            free(res);
            return NULL;
        }
        i = 0;
        while (i < len)
        {
            word[i] = s[start + i];
            i++;
        }
        word[i] = '\0';
        res[j] = word;
        j++;
        start += len;
    }
    res[j] = NULL;
    return res;
}