#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int j;
    size_t x;

    x = 0;
    i = 0;
    while( i < len && haystack[i])
    {
        j = 0;
        while(needle[j] != '\0' && haystack[i + j] == needle[j])
            j++;
        if(needle[j] == '\0')
            return ((char *)&haystack[i]);
        i++;
    }
    return NULL;
}

int main()
{
    char *big = "Yo , Mr White can we cook some meth";
    char *small = "can";
    printf("%s", ft_strnstr(big, small, 20));
}