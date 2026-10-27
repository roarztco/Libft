#include <stdio.h>
#include <stdlib.h>

int ft_countlen(int n)
{
    int count;

    count = 0;
    if(n <= 0)
        count++;
    while(n)
    {
        n /= 10;
        count++;
    }
    return count;
}

char *ft_itoa(int n)
{
    size_t len;
    char *res;
    long nb;

    len = ft_countlen(n);
    res = malloc(len + 1);
    if(!res)
        return NULL;
    nb = n;
    if(nb < 0)
        nb = -nb;
    res[len] = '\0';
    while(len > 0)
    {
        res[--len] = (nb % 10) + '0';
        nb /= 10;
    }
    if(n < 0)
        res[0] = '-';
    return res;
}