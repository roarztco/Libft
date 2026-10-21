#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

    i = 0;
    while(i < dstsize)
    {
        dst[i] = src[i];
        i++;
    }
    return i;
}